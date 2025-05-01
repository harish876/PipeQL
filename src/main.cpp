#include "PipeQLLexer.h"
#include "PipeQLParser.h"
#include "PipeQLVisitor.h"
#include "antlr4-runtime.h"
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

struct Document {
  json value;
};

class ConcretePipeQLVisitor : public PipeQLVisitor {
private:
  std::map<std::string, std::vector<Document>> &data;
  std::string table_name_;

public:
  // Constructor to initialize the map
  ConcretePipeQLVisitor(std::map<std::string, std::vector<Document>> &dataMap)
      : data(dataMap) {}

  // Visit the SELECT operator
  antlrcpp::Any
  visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) override {
    std::cout << "Processing SELECT operator..." << std::endl;
    // Get the rows for the table
    auto &rows = data[table_name_];

    std::vector<std::string> columns;
    // Process each column in the SELECT operator
    for (auto selectExpr : ctx->selectExpression()) {
      std::string column = selectExpr->expression()->getText();
      std::cout << "Column: " << column << std::endl;
      columns.push_back(column);
    }

    // Print the values for the column in each row
    std::vector<json> result;
    for (const auto &row : rows) {
      json tmp;
      for (auto column : columns) {
        if (row.value.contains(column)) {
          tmp[column] = row.value[column];
        }
      }
      result.push_back(tmp);
      tmp.clear();
    }

    for (auto row : result) {
      std::cout << row.dump(1, ' ') << std::endl;
    }

    return nullptr;
  }

  antlrcpp::Any visitQuery(PipeQLParser::QueryContext *ctx) override {
    // Visit the FROM clause
    std::string tableName;
    if (ctx->fromClause()) {
      std::cout << "Visiting FROM clause..." << std::endl;
      tableName =
          std::any_cast<std::string>(visitFromClause(ctx->fromClause()));
      table_name_ = tableName;
    }

    // Visit each pipe operator
    for (auto pipeOp : ctx->pipeOperator()) {
      std::cout << "Visiting pipe operator..." << std::endl;
      if (pipeOp->selectOperator()) {
        visitSelectOperator(pipeOp->selectOperator());
      }
    }

    return nullptr;
  }

  // Override the visitWhereOperator method
  antlrcpp::Any
  visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) override {
    std::string condition = ctx->booleanExpression()->getText();
    std::cout << "Evaluating WHERE condition: " << condition << std::endl;
    // Add logic to evaluate the condition against the map
    return nullptr;
  }

  // Implement all pure virtual methods from PipeQLVisitor
  antlrcpp::Any visitFromClause(PipeQLParser::FromClauseContext *ctx) override {
    // Extract the table name (IDENTIFIER) from the FROM clause
    std::string tableName = ctx->IDENTIFIER()->getText();

    // Check if the table exists in the data map
    if (data.find(tableName) == data.end()) {
      std::cerr << "Error: Table '" << tableName << "' not found in data map."
                << std::endl;
    }

    return tableName; // Return the table name for further processing
  }

  antlrcpp::Any
  visitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) override {
    std::cout << "Visiting pipe operator..." << std::endl;
    return nullptr;
  }
  antlrcpp::Any
  visitOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitUnionOperator(PipeQLParser::UnionOperatorContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitAssertOperator(PipeQLParser::AssertOperatorContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitLimitClause(PipeQLParser::LimitClauseContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitOffsetClause(PipeQLParser::OffsetClauseContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitSelectExpression(PipeQLParser::SelectExpressionContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitOrderExpression(PipeQLParser::OrderExpressionContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any visitExpression(PipeQLParser::ExpressionContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitFunctionCall(PipeQLParser::FunctionCallContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any visitLiteral(PipeQLParser::LiteralContext *ctx) override {
    return nullptr;
  }
  antlrcpp::Any
  visitAliasClause(PipeQLParser::AliasClauseContext *ctx) override {
    return nullptr;
  }
};

int populateTable(std::string table_name, std::vector<Document> &data) {
  std::ifstream file("./src/sample/" + table_name + ".json");
  if (!file.is_open()) {
    std::cerr << "Error: Could not open file." << std::endl;
    return 1;
  }

  json records;
  try {
    file >> records;
  } catch (const json::parse_error &e) {
    std::cerr << "JSON Parse Error: " << e.what() << std::endl;
    return 1;
  }

  for (const auto &record : records) {
    Document doc{record};
    data.push_back(doc);
  }

  return 0;
}

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " '<query>'" << std::endl;
    return 1;
  }

  std::string query = argv[1];

  // Create an input stream for the query
  antlr4::ANTLRInputStream input(query);

  // Create a lexer and parser
  PipeQLLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  PipeQLParser parser(&tokens);

  // Parse the query and get the parse tree
  auto *tree = parser.query();

  std::vector<Document> customers;
  if (populateTable("customers", customers)) {
    std::cout << "Could not populate data for querying" << std::endl;
    return 1;
  }

  std::map<std::string, std::vector<Document>> data = {
      {"customers", customers},
  };
  ConcretePipeQLVisitor visitor(data);
  visitor.visitQuery(tree);

  return 0;
}