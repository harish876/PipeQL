
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2

#pragma once

#include "PipeQLParser.h"
#include "antlr4-runtime.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PipeQLParser.
 */
class PipeQLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:
  // PipeQLVisitor(); // Constructor declarations
  // virtual ~PipeQLVisitor() = default;

  virtual std::any visitQuery(PipeQLParser::QueryContext *context) = 0;

  virtual std::any
  visitFromClause(PipeQLParser::FromClauseContext *context) = 0;

  virtual std::any
  visitPipeOperator(PipeQLParser::PipeOperatorContext *context) = 0;

  virtual std::any
  visitSelectOperator(PipeQLParser::SelectOperatorContext *context) = 0;

  virtual std::any
  visitWhereOperator(PipeQLParser::WhereOperatorContext *context) = 0;

  virtual std::any
  visitOrderByOperator(PipeQLParser::OrderByOperatorContext *context) = 0;

  virtual std::any
  visitUnionOperator(PipeQLParser::UnionOperatorContext *context) = 0;

  virtual std::any
  visitIntersectOperator(PipeQLParser::IntersectOperatorContext *context) = 0;

  virtual std::any
  visitExceptOperator(PipeQLParser::ExceptOperatorContext *context) = 0;

  virtual std::any
  visitAssertOperator(PipeQLParser::AssertOperatorContext *context) = 0;

  virtual std::any
  visitLimitClause(PipeQLParser::LimitClauseContext *context) = 0;

  virtual std::any
  visitOffsetClause(PipeQLParser::OffsetClauseContext *context) = 0;

  virtual std::any
  visitSelectExpression(PipeQLParser::SelectExpressionContext *context) = 0;

  virtual std::any
  visitOrderExpression(PipeQLParser::OrderExpressionContext *context) = 0;

  virtual std::any
  visitBooleanExpression(PipeQLParser::BooleanExpressionContext *context) = 0;

  virtual std::any
  visitPayloadExpression(PipeQLParser::PayloadExpressionContext *context) = 0;

  virtual std::any
  visitExpression(PipeQLParser::ExpressionContext *context) = 0;

  virtual std::any
  visitFunctionCall(PipeQLParser::FunctionCallContext *context) = 0;

  virtual std::any visitLiteral(PipeQLParser::LiteralContext *context) = 0;

  virtual std::any
  visitAliasClause(PipeQLParser::AliasClauseContext *context) = 0;
};
