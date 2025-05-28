
// Generated from /root/PipeQL/src/grammar/PipeQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PipeQLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PipeQLParser.
 */
class  PipeQLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterQuery(PipeQLParser::QueryContext *ctx) = 0;
  virtual void exitQuery(PipeQLParser::QueryContext *ctx) = 0;

  virtual void enterFromClause(PipeQLParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(PipeQLParser::FromClauseContext *ctx) = 0;

  virtual void enterPipeOperator(PipeQLParser::PipeOperatorContext *ctx) = 0;
  virtual void exitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) = 0;

  virtual void enterSelectOperator(PipeQLParser::SelectOperatorContext *ctx) = 0;
  virtual void exitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) = 0;

  virtual void enterWhereOperator(PipeQLParser::WhereOperatorContext *ctx) = 0;
  virtual void exitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) = 0;

  virtual void enterOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) = 0;
  virtual void exitOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) = 0;

  virtual void enterUnionOperator(PipeQLParser::UnionOperatorContext *ctx) = 0;
  virtual void exitUnionOperator(PipeQLParser::UnionOperatorContext *ctx) = 0;

  virtual void enterIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) = 0;
  virtual void exitIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) = 0;

  virtual void enterExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) = 0;
  virtual void exitExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) = 0;

  virtual void enterAssertOperator(PipeQLParser::AssertOperatorContext *ctx) = 0;
  virtual void exitAssertOperator(PipeQLParser::AssertOperatorContext *ctx) = 0;

  virtual void enterLimitClause(PipeQLParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(PipeQLParser::LimitClauseContext *ctx) = 0;

  virtual void enterOffsetClause(PipeQLParser::OffsetClauseContext *ctx) = 0;
  virtual void exitOffsetClause(PipeQLParser::OffsetClauseContext *ctx) = 0;

  virtual void enterSelectExpression(PipeQLParser::SelectExpressionContext *ctx) = 0;
  virtual void exitSelectExpression(PipeQLParser::SelectExpressionContext *ctx) = 0;

  virtual void enterOrderExpression(PipeQLParser::OrderExpressionContext *ctx) = 0;
  virtual void exitOrderExpression(PipeQLParser::OrderExpressionContext *ctx) = 0;

  virtual void enterBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) = 0;
  virtual void exitBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) = 0;

  virtual void enterComparisonOperator(PipeQLParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(PipeQLParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) = 0;
  virtual void exitPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) = 0;

  virtual void enterExpression(PipeQLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PipeQLParser::ExpressionContext *ctx) = 0;

  virtual void enterFunctionCall(PipeQLParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(PipeQLParser::FunctionCallContext *ctx) = 0;

  virtual void enterLiteral(PipeQLParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(PipeQLParser::LiteralContext *ctx) = 0;

  virtual void enterAliasClause(PipeQLParser::AliasClauseContext *ctx) = 0;
  virtual void exitAliasClause(PipeQLParser::AliasClauseContext *ctx) = 0;


};

