# Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .PipeQLParser import PipeQLParser
else:
    from python.PipeQLParser import PipeQLParser

# This class defines a complete listener for a parse tree produced by PipeQLParser.
class PipeQLListener(ParseTreeListener):

    # Enter a parse tree produced by PipeQLParser#query.
    def enterQuery(self, ctx:PipeQLParser.QueryContext):
        pass

    # Exit a parse tree produced by PipeQLParser#query.
    def exitQuery(self, ctx:PipeQLParser.QueryContext):
        pass


    # Enter a parse tree produced by PipeQLParser#fromClause.
    def enterFromClause(self, ctx:PipeQLParser.FromClauseContext):
        pass

    # Exit a parse tree produced by PipeQLParser#fromClause.
    def exitFromClause(self, ctx:PipeQLParser.FromClauseContext):
        pass


    # Enter a parse tree produced by PipeQLParser#pipeOperator.
    def enterPipeOperator(self, ctx:PipeQLParser.PipeOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#pipeOperator.
    def exitPipeOperator(self, ctx:PipeQLParser.PipeOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#selectOperator.
    def enterSelectOperator(self, ctx:PipeQLParser.SelectOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#selectOperator.
    def exitSelectOperator(self, ctx:PipeQLParser.SelectOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#whereOperator.
    def enterWhereOperator(self, ctx:PipeQLParser.WhereOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#whereOperator.
    def exitWhereOperator(self, ctx:PipeQLParser.WhereOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#orderByOperator.
    def enterOrderByOperator(self, ctx:PipeQLParser.OrderByOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#orderByOperator.
    def exitOrderByOperator(self, ctx:PipeQLParser.OrderByOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#unionOperator.
    def enterUnionOperator(self, ctx:PipeQLParser.UnionOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#unionOperator.
    def exitUnionOperator(self, ctx:PipeQLParser.UnionOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#intersectOperator.
    def enterIntersectOperator(self, ctx:PipeQLParser.IntersectOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#intersectOperator.
    def exitIntersectOperator(self, ctx:PipeQLParser.IntersectOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#exceptOperator.
    def enterExceptOperator(self, ctx:PipeQLParser.ExceptOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#exceptOperator.
    def exitExceptOperator(self, ctx:PipeQLParser.ExceptOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#assertOperator.
    def enterAssertOperator(self, ctx:PipeQLParser.AssertOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#assertOperator.
    def exitAssertOperator(self, ctx:PipeQLParser.AssertOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#limitClause.
    def enterLimitClause(self, ctx:PipeQLParser.LimitClauseContext):
        pass

    # Exit a parse tree produced by PipeQLParser#limitClause.
    def exitLimitClause(self, ctx:PipeQLParser.LimitClauseContext):
        pass


    # Enter a parse tree produced by PipeQLParser#offsetClause.
    def enterOffsetClause(self, ctx:PipeQLParser.OffsetClauseContext):
        pass

    # Exit a parse tree produced by PipeQLParser#offsetClause.
    def exitOffsetClause(self, ctx:PipeQLParser.OffsetClauseContext):
        pass


    # Enter a parse tree produced by PipeQLParser#selectExpression.
    def enterSelectExpression(self, ctx:PipeQLParser.SelectExpressionContext):
        pass

    # Exit a parse tree produced by PipeQLParser#selectExpression.
    def exitSelectExpression(self, ctx:PipeQLParser.SelectExpressionContext):
        pass


    # Enter a parse tree produced by PipeQLParser#orderExpression.
    def enterOrderExpression(self, ctx:PipeQLParser.OrderExpressionContext):
        pass

    # Exit a parse tree produced by PipeQLParser#orderExpression.
    def exitOrderExpression(self, ctx:PipeQLParser.OrderExpressionContext):
        pass


    # Enter a parse tree produced by PipeQLParser#booleanExpression.
    def enterBooleanExpression(self, ctx:PipeQLParser.BooleanExpressionContext):
        pass

    # Exit a parse tree produced by PipeQLParser#booleanExpression.
    def exitBooleanExpression(self, ctx:PipeQLParser.BooleanExpressionContext):
        pass


    # Enter a parse tree produced by PipeQLParser#comparisonOperator.
    def enterComparisonOperator(self, ctx:PipeQLParser.ComparisonOperatorContext):
        pass

    # Exit a parse tree produced by PipeQLParser#comparisonOperator.
    def exitComparisonOperator(self, ctx:PipeQLParser.ComparisonOperatorContext):
        pass


    # Enter a parse tree produced by PipeQLParser#payloadExpression.
    def enterPayloadExpression(self, ctx:PipeQLParser.PayloadExpressionContext):
        pass

    # Exit a parse tree produced by PipeQLParser#payloadExpression.
    def exitPayloadExpression(self, ctx:PipeQLParser.PayloadExpressionContext):
        pass


    # Enter a parse tree produced by PipeQLParser#expression.
    def enterExpression(self, ctx:PipeQLParser.ExpressionContext):
        pass

    # Exit a parse tree produced by PipeQLParser#expression.
    def exitExpression(self, ctx:PipeQLParser.ExpressionContext):
        pass


    # Enter a parse tree produced by PipeQLParser#functionCall.
    def enterFunctionCall(self, ctx:PipeQLParser.FunctionCallContext):
        pass

    # Exit a parse tree produced by PipeQLParser#functionCall.
    def exitFunctionCall(self, ctx:PipeQLParser.FunctionCallContext):
        pass


    # Enter a parse tree produced by PipeQLParser#literal.
    def enterLiteral(self, ctx:PipeQLParser.LiteralContext):
        pass

    # Exit a parse tree produced by PipeQLParser#literal.
    def exitLiteral(self, ctx:PipeQLParser.LiteralContext):
        pass


    # Enter a parse tree produced by PipeQLParser#aliasClause.
    def enterAliasClause(self, ctx:PipeQLParser.AliasClauseContext):
        pass

    # Exit a parse tree produced by PipeQLParser#aliasClause.
    def exitAliasClause(self, ctx:PipeQLParser.AliasClauseContext):
        pass



del PipeQLParser