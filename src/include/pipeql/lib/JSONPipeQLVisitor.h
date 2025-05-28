#ifndef JSON_PIPEQL_VISITOR_H
#define JSON_PIPEQL_VISITOR_H

#include "pipeql/parser/PipeQLVisitor.h"
#include "nlohmann/json.hpp"
#include "antlr4-runtime.h"
#include <map>
#include <string>
#include <vector>

class JSONPipeQLVisitor : public PipeQLVisitor {
public:
    JSONPipeQLVisitor(std::map<std::string, std::vector<nlohmann::json>> &dataMap);

    antlrcpp::Any visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) override;
    antlrcpp::Any visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx, const std::vector<nlohmann::json> &rows);

    antlrcpp::Any visitQuery(PipeQLParser::QueryContext *ctx) override;

    antlrcpp::Any visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) override;
    antlrcpp::Any visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx, const std::vector<nlohmann::json> &rows);

    antlrcpp::Any visitFromClause(PipeQLParser::FromClauseContext *ctx) override;
    antlrcpp::Any visitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) override;
    antlrcpp::Any visitOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) override;
    antlrcpp::Any visitUnionOperator(PipeQLParser::UnionOperatorContext *ctx) override;
    antlrcpp::Any visitIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) override;
    antlrcpp::Any visitExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) override;
    antlrcpp::Any visitAssertOperator(PipeQLParser::AssertOperatorContext *ctx) override;
    antlrcpp::Any visitLimitClause(PipeQLParser::LimitClauseContext *ctx) override;
    antlrcpp::Any visitOffsetClause(PipeQLParser::OffsetClauseContext *ctx) override;
    antlrcpp::Any visitSelectExpression(PipeQLParser::SelectExpressionContext *ctx) override;
    antlrcpp::Any visitOrderExpression(PipeQLParser::OrderExpressionContext *ctx) override;
    antlrcpp::Any visitBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) override;
    antlrcpp::Any visitComparisonOperator(PipeQLParser::ComparisonOperatorContext *ctx) override;
    antlrcpp::Any visitPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) override;
    antlrcpp::Any visitExpression(PipeQLParser::ExpressionContext *ctx) override;
    antlrcpp::Any visitFunctionCall(PipeQLParser::FunctionCallContext *ctx) override;
    antlrcpp::Any visitLiteral(PipeQLParser::LiteralContext *ctx) override;
    antlrcpp::Any visitAliasClause(PipeQLParser::AliasClauseContext *ctx) override;

private:
    std::map<std::string, std::vector<nlohmann::json>> &data;
    std::string table_name_;
};

#endif // JSON_PIPEQL_VISITOR_H 