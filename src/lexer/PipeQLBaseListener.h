
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PipeQLListener.h"


/**
 * This class provides an empty implementation of PipeQLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PipeQLBaseListener : public PipeQLListener {
public:

  virtual void enterQuery(PipeQLParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(PipeQLParser::QueryContext * /*ctx*/) override { }

  virtual void enterFromClause(PipeQLParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(PipeQLParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterPipeOperator(PipeQLParser::PipeOperatorContext * /*ctx*/) override { }
  virtual void exitPipeOperator(PipeQLParser::PipeOperatorContext * /*ctx*/) override { }

  virtual void enterSelectOperator(PipeQLParser::SelectOperatorContext * /*ctx*/) override { }
  virtual void exitSelectOperator(PipeQLParser::SelectOperatorContext * /*ctx*/) override { }

  virtual void enterWhereOperator(PipeQLParser::WhereOperatorContext * /*ctx*/) override { }
  virtual void exitWhereOperator(PipeQLParser::WhereOperatorContext * /*ctx*/) override { }

  virtual void enterOrderByOperator(PipeQLParser::OrderByOperatorContext * /*ctx*/) override { }
  virtual void exitOrderByOperator(PipeQLParser::OrderByOperatorContext * /*ctx*/) override { }

  virtual void enterUnionOperator(PipeQLParser::UnionOperatorContext * /*ctx*/) override { }
  virtual void exitUnionOperator(PipeQLParser::UnionOperatorContext * /*ctx*/) override { }

  virtual void enterIntersectOperator(PipeQLParser::IntersectOperatorContext * /*ctx*/) override { }
  virtual void exitIntersectOperator(PipeQLParser::IntersectOperatorContext * /*ctx*/) override { }

  virtual void enterExceptOperator(PipeQLParser::ExceptOperatorContext * /*ctx*/) override { }
  virtual void exitExceptOperator(PipeQLParser::ExceptOperatorContext * /*ctx*/) override { }

  virtual void enterAssertOperator(PipeQLParser::AssertOperatorContext * /*ctx*/) override { }
  virtual void exitAssertOperator(PipeQLParser::AssertOperatorContext * /*ctx*/) override { }

  virtual void enterLimitClause(PipeQLParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(PipeQLParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterOffsetClause(PipeQLParser::OffsetClauseContext * /*ctx*/) override { }
  virtual void exitOffsetClause(PipeQLParser::OffsetClauseContext * /*ctx*/) override { }

  virtual void enterSelectExpression(PipeQLParser::SelectExpressionContext * /*ctx*/) override { }
  virtual void exitSelectExpression(PipeQLParser::SelectExpressionContext * /*ctx*/) override { }

  virtual void enterOrderExpression(PipeQLParser::OrderExpressionContext * /*ctx*/) override { }
  virtual void exitOrderExpression(PipeQLParser::OrderExpressionContext * /*ctx*/) override { }

  virtual void enterBooleanExpression(PipeQLParser::BooleanExpressionContext * /*ctx*/) override { }
  virtual void exitBooleanExpression(PipeQLParser::BooleanExpressionContext * /*ctx*/) override { }

  virtual void enterPayloadExpression(PipeQLParser::PayloadExpressionContext * /*ctx*/) override { }
  virtual void exitPayloadExpression(PipeQLParser::PayloadExpressionContext * /*ctx*/) override { }

  virtual void enterExpression(PipeQLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PipeQLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(PipeQLParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(PipeQLParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterLiteral(PipeQLParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(PipeQLParser::LiteralContext * /*ctx*/) override { }

  virtual void enterAliasClause(PipeQLParser::AliasClauseContext * /*ctx*/) override { }
  virtual void exitAliasClause(PipeQLParser::AliasClauseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

