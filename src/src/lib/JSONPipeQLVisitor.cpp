#include "pipeql/parser/PipeQLParser.h"
#include "pipeql/parser/PipeQLVisitor.h"
#include "nlohmann/json.hpp"
#include "antlr4-runtime.h"
#include "pipeql/lib/JSONPipeQLVisitor.h"
#include <string>

JSONPipeQLVisitor::JSONPipeQLVisitor(std::map<std::string, std::vector<nlohmann::json>> &dataMap)
    : data(dataMap) {}

antlrcpp::Any JSONPipeQLVisitor::visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) {
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

  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx,
                                    const std::vector<nlohmann::json> &rows) {
  std::vector<std::string> columns;
  for (auto selectExpr : ctx->selectExpression()) {
    std::string column;
    if (selectExpr->expression()) {
      column = selectExpr->expression()->getText();
    } else {
      column = selectExpr->getText();
    }
    std::cout << "Column: " << column << std::endl;
    columns.push_back(column);
  }

  std::vector<nlohmann::json> result;
  for (const auto &row : rows) {
    if (columns.size() == 1 && columns[0] == "*") {
      result.push_back(row);
    } else {
      nlohmann::json tmp;
      for (const auto &column : columns) {
        if (row.contains(column)) {
          tmp[column] = row[column];
        }
      }
      result.push_back(tmp);
    }
  }

  for (const auto &row : result) {
    std::cout << row.dump(1, ' ') << std::endl;
  }
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitQuery(PipeQLParser::QueryContext *ctx) {
  std::string tableName;
  if (ctx->fromClause()) {
    tableName = std::any_cast<std::string>(visitFromClause(ctx->fromClause()));
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

  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) {
  std::string condition = ctx->booleanExpression()->getText();
  std::cout << "Evaluating WHERE condition: " << condition << std::endl;
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx,
                                   const std::vector<nlohmann::json> &rows) {
  auto booleanExpr = ctx->booleanExpression();
  std::string whereExpression = booleanExpr->getText();

  if (whereExpression.find("BETWEEN") != std::string::npos ||
      whereExpression.find("between") != std::string::npos) {
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
  } else if (whereExpression.find(">") != std::string::npos) {
    auto columnExpr = booleanExpr->expression(0); // Column name
    auto expr = booleanExpr->expression(1);       // Upper bound

    std::string column = columnExpr->getText();
    int exprValue = std::stoi(expr->getText());
    std::cout << "Filtering rows where " << column << " > " << exprValue
              << std::endl;

    // Filter rows based on the > condition
    std::vector<nlohmann::json> filteredRows;
    for (const auto &row : rows) {
      if (row.contains(column)) {
        int value = row[column];
        if (value > exprValue) {
          filteredRows.push_back(row);
        }
      }
    }

    return filteredRows;
  } else if (whereExpression.find("==") != std::string::npos) {
    auto columnExpr = booleanExpr->expression(0); // Column name
    auto expr = booleanExpr->expression(1);       // Upper bound

    std::string column = columnExpr->getText();
    int exprValue = std::stoi(expr->getText());
    std::cout << "Filtering rows where " << column << " > " << exprValue
              << std::endl;

    // Filter rows based on the > condition
    std::vector<nlohmann::json> filteredRows;
    for (const auto &row : rows) {
      if (row.contains(column)) {
        int value = row[column];
        if (value == exprValue) {
          filteredRows.push_back(row);
        }
      }
    }

    return filteredRows;
  } else if (whereExpression.find("<") != std::string::npos) {
    auto columnExpr = booleanExpr->expression(0); // Column name
    auto expr = booleanExpr->expression(1);       // Upper bound

    std::string column = columnExpr->getText();
    int exprValue = std::stoi(expr->getText());
    std::cout << "Filtering rows where " << column << " > " << exprValue
              << std::endl;

    // Filter rows based on the < condition
    std::vector<nlohmann::json> filteredRows;
    for (const auto &row : rows) {
      if (row.contains(column)) {
        int value = row[column];
        if (value < exprValue) {
          filteredRows.push_back(row);
        }
      }
    }
    return filteredRows;
  }

  return rows;
}

antlrcpp::Any JSONPipeQLVisitor::visitFromClause(PipeQLParser::FromClauseContext *ctx) {
  std::string tableName = ctx->IDENTIFIER()->getText();

  if (data.find(tableName) == data.end()) {
    std::cerr << "Error: Table '" << tableName << "' not found in data map."
              << std::endl;
  }

  return tableName;
}

antlrcpp::Any JSONPipeQLVisitor::visitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitUnionOperator(PipeQLParser::UnionOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitAssertOperator(PipeQLParser::AssertOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitLimitClause(PipeQLParser::LimitClauseContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitOffsetClause(PipeQLParser::OffsetClauseContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitSelectExpression(PipeQLParser::SelectExpressionContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitOrderExpression(PipeQLParser::OrderExpressionContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitComparisonOperator(PipeQLParser::ComparisonOperatorContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitExpression(PipeQLParser::ExpressionContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitFunctionCall(PipeQLParser::FunctionCallContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitLiteral(PipeQLParser::LiteralContext *ctx) {
  return antlrcpp::Any{};
}

antlrcpp::Any JSONPipeQLVisitor::visitAliasClause(PipeQLParser::AliasClauseContext *ctx) {
  return antlrcpp::Any{};
}