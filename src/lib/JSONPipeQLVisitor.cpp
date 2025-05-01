#include "PipeQLVisitor.h"
#include "nlohmann/json.hpp"

class JSONPipeQLVisitor : public PipeQLVisitor {
private:
  std::map<std::string, std::vector<nlohmann::json>> &data;
  std::string table_name_;

public:
  JSONPipeQLVisitor(std::map<std::string, std::vector<nlohmann::json>> &dataMap)
      : data(dataMap) {}

  antlrcpp::Any
  visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) override {
    ;
    auto &rows = data[table_name_];

    std::vector<std::string> columns;
    for (auto selectExpr : ctx->selectExpression()) {
      std::string column = selectExpr->expression()->getText();
      columns.push_back(column);
    }

    std::vector<nlohmann::json> result;
    for (const auto &row : rows) {
      nlohmann::json tmp;
      for (auto column : columns) {
        if (row.contains(column)) {
          tmp[column] = row[column];
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

  antlrcpp::Any visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx,
                                    const std::vector<nlohmann::json> &rows) {
    std::vector<std::string> columns;
    for (auto selectExpr : ctx->selectExpression()) {
      std::string column = selectExpr->expression()->getText();
      columns.push_back(column);
    }

    std::vector<nlohmann::json> result;
    for (const auto &row : rows) {
      nlohmann::json tmp;
      for (const auto &column : columns) {
        if (row.contains(column)) {
          tmp[column] = row[column];
        }
      }
      result.push_back(tmp);
    }

    for (const auto &row : result) {
      std::cout << row.dump(1, ' ') << std::endl;
    }
    return nullptr;
  }

  antlrcpp::Any visitQuery(PipeQLParser::QueryContext *ctx) override {
    std::string tableName;
    if (ctx->fromClause()) {
      tableName =
          std::any_cast<std::string>(visitFromClause(ctx->fromClause()));
      table_name_ = tableName;
    }

    std::vector<nlohmann::json> filteredRows = data[table_name_];

    for (auto pipeOp : ctx->pipeOperator()) {
      if (pipeOp->whereOperator()) {
        filteredRows = std::any_cast<std::vector<nlohmann::json>>(
            visitWhereOperator(pipeOp->whereOperator(), filteredRows));
      }
    }

    for (auto pipeOp : ctx->pipeOperator()) {
      if (pipeOp->selectOperator()) {
        visitSelectOperator(pipeOp->selectOperator(), filteredRows);
      }
    }

    return nullptr;
  }

  antlrcpp::Any
  visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) override {
    std::string condition = ctx->booleanExpression()->getText();
    std::cout << "Evaluating WHERE condition: " << condition << std::endl;
    return nullptr;
  }

  antlrcpp::Any visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx,
                                   const std::vector<nlohmann::json> &rows) {
    std::cout << "Evaluating WHERE condition..." << std::endl;

    auto booleanExpr = ctx->booleanExpression();
    if (booleanExpr->getText().find("BETWEEN") != std::string::npos) {
      auto columnExpr = booleanExpr->expression(0);     // Column name
      auto lowerBoundExpr = booleanExpr->expression(1); // Lower bound
      auto upperBoundExpr = booleanExpr->expression(2); // Upper bound

      std::string column = columnExpr->getText();
      int lowerBound = std::stoi(lowerBoundExpr->getText());
      int upperBound = std::stoi(upperBoundExpr->getText());

      std::cout << "Filtering rows where " << column << " BETWEEN "
                << lowerBound << " AND " << upperBound << std::endl;

      // Filter rows based on the BETWEEN condition
      std::vector<nlohmann::json> filteredRows;
      for (const auto &row : rows) {
        if (row.contains(column)) {
          int value = row[column];
          if (value >= lowerBound && value <= upperBound) {
            filteredRows.push_back(row);
          }
        }
      }

      return filteredRows;
    }

    // Handle other conditions (if any)
    return rows;
  }

  antlrcpp::Any visitFromClause(PipeQLParser::FromClauseContext *ctx) override {
    std::string tableName = ctx->IDENTIFIER()->getText();

    if (data.find(tableName) == data.end()) {
      std::cerr << "Error: Table '" << tableName << "' not found in data map."
                << std::endl;
    }

    return tableName;
  }

  antlrcpp::Any
  visitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) override {
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