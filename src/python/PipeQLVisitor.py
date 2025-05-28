# Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .PipeQLParser import PipeQLParser
else:
    from PipeQLParser import PipeQLParser

# This class defines a complete generic visitor for a parse tree produced by PipeQLParser.

class PipeQLVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by PipeQLParser#query.
    def visitQuery(self, ctx:PipeQLParser.QueryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#fromClause.
    def visitFromClause(self, ctx:PipeQLParser.FromClauseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#pipeOperator.
    def visitPipeOperator(self, ctx:PipeQLParser.PipeOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#selectOperator.
    def visitSelectOperator(self, ctx:PipeQLParser.SelectOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#whereOperator.
    def visitWhereOperator(self, ctx:PipeQLParser.WhereOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#orderByOperator.
    def visitOrderByOperator(self, ctx:PipeQLParser.OrderByOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#unionOperator.
    def visitUnionOperator(self, ctx:PipeQLParser.UnionOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#intersectOperator.
    def visitIntersectOperator(self, ctx:PipeQLParser.IntersectOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#exceptOperator.
    def visitExceptOperator(self, ctx:PipeQLParser.ExceptOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#assertOperator.
    def visitAssertOperator(self, ctx:PipeQLParser.AssertOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#limitClause.
    def visitLimitClause(self, ctx:PipeQLParser.LimitClauseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#offsetClause.
    def visitOffsetClause(self, ctx:PipeQLParser.OffsetClauseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#selectExpression.
    def visitSelectExpression(self, ctx:PipeQLParser.SelectExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#orderExpression.
    def visitOrderExpression(self, ctx:PipeQLParser.OrderExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#booleanExpression.
    def visitBooleanExpression(self, ctx:PipeQLParser.BooleanExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#comparisonOperator.
    def visitComparisonOperator(self, ctx:PipeQLParser.ComparisonOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#payloadExpression.
    def visitPayloadExpression(self, ctx:PipeQLParser.PayloadExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#expression.
    def visitExpression(self, ctx:PipeQLParser.ExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#functionCall.
    def visitFunctionCall(self, ctx:PipeQLParser.FunctionCallContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#literal.
    def visitLiteral(self, ctx:PipeQLParser.LiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by PipeQLParser#aliasClause.
    def visitAliasClause(self, ctx:PipeQLParser.AliasClauseContext):
        return self.visitChildren(ctx)



del PipeQLParser