
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PipeQLVisitor.h"


/**
 * This class provides an empty implementation of PipeQLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PipeQLBaseVisitor : public PipeQLVisitor {
public:

  virtual std::any visitQuery(PipeQLParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(PipeQLParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPipeOperator(PipeQLParser::PipeOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectOperator(PipeQLParser::SelectOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereOperator(PipeQLParser::WhereOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderByOperator(PipeQLParser::OrderByOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionOperator(PipeQLParser::UnionOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersectOperator(PipeQLParser::IntersectOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptOperator(PipeQLParser::ExceptOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssertOperator(PipeQLParser::AssertOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLimitClause(PipeQLParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOffsetClause(PipeQLParser::OffsetClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectExpression(PipeQLParser::SelectExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderExpression(PipeQLParser::OrderExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanExpression(PipeQLParser::BooleanExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPayloadExpression(PipeQLParser::PayloadExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(PipeQLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(PipeQLParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(PipeQLParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasClause(PipeQLParser::AliasClauseContext *ctx) override {
    return visitChildren(ctx);
  }


};

