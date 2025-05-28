# Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,31,208,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,
        7,20,1,0,1,0,5,0,45,8,0,10,0,12,0,48,9,0,1,0,1,0,1,1,1,1,1,1,3,1,
        55,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
        2,1,2,3,2,73,8,2,1,3,1,3,1,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,4,
        1,4,1,4,1,5,1,5,1,5,1,5,5,5,91,8,5,10,5,12,5,94,9,5,1,6,1,6,1,6,
        1,6,1,6,1,6,5,6,102,8,6,10,6,12,6,105,9,6,1,6,1,6,1,7,1,7,1,7,1,
        7,1,7,1,7,5,7,115,8,7,10,7,12,7,118,9,7,1,7,1,7,1,8,1,8,1,8,1,8,
        1,8,1,8,5,8,128,8,8,10,8,12,8,131,9,8,1,8,1,8,1,9,1,9,1,9,1,9,5,
        9,139,8,9,10,9,12,9,142,9,9,1,10,1,10,1,10,3,10,147,8,10,1,11,1,
        11,1,11,1,12,1,12,1,12,3,12,155,8,12,1,12,3,12,158,8,12,1,13,1,13,
        3,13,162,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
        3,14,174,8,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
        1,17,3,17,187,8,17,1,18,1,18,1,18,1,18,1,18,5,18,194,8,18,10,18,
        12,18,197,9,18,3,18,199,8,18,1,18,1,18,1,19,1,19,1,20,1,20,1,20,
        1,20,0,0,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
        38,40,0,4,1,0,2,3,1,0,17,18,1,0,7,11,1,0,29,30,211,0,42,1,0,0,0,
        2,51,1,0,0,0,4,72,1,0,0,0,6,74,1,0,0,0,8,83,1,0,0,0,10,86,1,0,0,
        0,12,95,1,0,0,0,14,108,1,0,0,0,16,121,1,0,0,0,18,134,1,0,0,0,20,
        143,1,0,0,0,22,148,1,0,0,0,24,157,1,0,0,0,26,159,1,0,0,0,28,173,
        1,0,0,0,30,175,1,0,0,0,32,177,1,0,0,0,34,186,1,0,0,0,36,188,1,0,
        0,0,38,202,1,0,0,0,40,204,1,0,0,0,42,46,3,2,1,0,43,45,3,4,2,0,44,
        43,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,
        0,48,46,1,0,0,0,49,50,5,0,0,1,50,1,1,0,0,0,51,52,5,12,0,0,52,54,
        5,28,0,0,53,55,3,40,20,0,54,53,1,0,0,0,54,55,1,0,0,0,55,3,1,0,0,
        0,56,57,5,27,0,0,57,73,3,6,3,0,58,59,5,27,0,0,59,73,3,8,4,0,60,61,
        5,27,0,0,61,73,3,10,5,0,62,63,5,27,0,0,63,73,3,12,6,0,64,65,5,27,
        0,0,65,73,3,14,7,0,66,67,5,27,0,0,67,73,3,16,8,0,68,69,5,27,0,0,
        69,73,3,18,9,0,70,71,5,27,0,0,71,73,3,20,10,0,72,56,1,0,0,0,72,58,
        1,0,0,0,72,60,1,0,0,0,72,62,1,0,0,0,72,64,1,0,0,0,72,66,1,0,0,0,
        72,68,1,0,0,0,72,70,1,0,0,0,73,5,1,0,0,0,74,75,5,13,0,0,75,80,3,
        24,12,0,76,77,5,1,0,0,77,79,3,24,12,0,78,76,1,0,0,0,79,82,1,0,0,
        0,80,78,1,0,0,0,80,81,1,0,0,0,81,7,1,0,0,0,82,80,1,0,0,0,83,84,5,
        15,0,0,84,85,3,28,14,0,85,9,1,0,0,0,86,87,5,16,0,0,87,92,3,26,13,
        0,88,89,5,1,0,0,89,91,3,26,13,0,90,88,1,0,0,0,91,94,1,0,0,0,92,90,
        1,0,0,0,92,93,1,0,0,0,93,11,1,0,0,0,94,92,1,0,0,0,95,96,5,19,0,0,
        96,97,7,0,0,0,97,98,5,4,0,0,98,103,3,0,0,0,99,100,5,1,0,0,100,102,
        3,0,0,0,101,99,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,
        0,0,0,104,106,1,0,0,0,105,103,1,0,0,0,106,107,5,5,0,0,107,13,1,0,
        0,0,108,109,5,20,0,0,109,110,7,0,0,0,110,111,5,4,0,0,111,116,3,0,
        0,0,112,113,5,1,0,0,113,115,3,0,0,0,114,112,1,0,0,0,115,118,1,0,
        0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,116,1,0,
        0,0,119,120,5,5,0,0,120,15,1,0,0,0,121,122,5,21,0,0,122,123,7,0,
        0,0,123,124,5,4,0,0,124,129,3,0,0,0,125,126,5,1,0,0,126,128,3,0,
        0,0,127,125,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,0,
        0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,5,0,0,133,17,1,0,0,
        0,134,135,5,22,0,0,135,140,3,28,14,0,136,137,5,1,0,0,137,139,3,32,
        16,0,138,136,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,
        0,0,141,19,1,0,0,0,142,140,1,0,0,0,143,144,5,23,0,0,144,146,5,30,
        0,0,145,147,3,22,11,0,146,145,1,0,0,0,146,147,1,0,0,0,147,21,1,0,
        0,0,148,149,5,24,0,0,149,150,5,30,0,0,150,23,1,0,0,0,151,154,3,34,
        17,0,152,153,5,14,0,0,153,155,5,28,0,0,154,152,1,0,0,0,154,155,1,
        0,0,0,155,158,1,0,0,0,156,158,5,6,0,0,157,151,1,0,0,0,157,156,1,
        0,0,0,158,25,1,0,0,0,159,161,3,34,17,0,160,162,7,1,0,0,161,160,1,
        0,0,0,161,162,1,0,0,0,162,27,1,0,0,0,163,164,3,34,17,0,164,165,3,
        30,15,0,165,166,3,34,17,0,166,174,1,0,0,0,167,168,3,34,17,0,168,
        169,5,25,0,0,169,170,3,34,17,0,170,171,5,26,0,0,171,172,3,34,17,
        0,172,174,1,0,0,0,173,163,1,0,0,0,173,167,1,0,0,0,174,29,1,0,0,0,
        175,176,7,2,0,0,176,31,1,0,0,0,177,178,3,34,17,0,178,33,1,0,0,0,
        179,187,5,28,0,0,180,187,3,38,19,0,181,187,3,36,18,0,182,183,5,4,
        0,0,183,184,3,34,17,0,184,185,5,5,0,0,185,187,1,0,0,0,186,179,1,
        0,0,0,186,180,1,0,0,0,186,181,1,0,0,0,186,182,1,0,0,0,187,35,1,0,
        0,0,188,189,5,28,0,0,189,198,5,4,0,0,190,195,3,34,17,0,191,192,5,
        1,0,0,192,194,3,34,17,0,193,191,1,0,0,0,194,197,1,0,0,0,195,193,
        1,0,0,0,195,196,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,198,190,
        1,0,0,0,198,199,1,0,0,0,199,200,1,0,0,0,200,201,5,5,0,0,201,37,1,
        0,0,0,202,203,7,3,0,0,203,39,1,0,0,0,204,205,5,14,0,0,205,206,5,
        28,0,0,206,41,1,0,0,0,17,46,54,72,80,92,103,116,129,140,146,154,
        157,161,173,186,195,198
    ]

class PipeQLParser ( Parser ):

    grammarFileName = "PipeQL.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "','", "'ALL'", "'DISTINCT'", "'('", "')'", 
                     "'*'", "'=='", "'>'", "'<'", "'>='", "'<='", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "'|>'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "FROM", "SELECT", "AS", "WHERE", "ORDER_BY", "ASC", 
                      "DESC", "UNION", "INTERSECT", "EXCEPT", "ASSERT", 
                      "LIMIT", "OFFSET", "BETWEEN", "AND", "PIPE_OPERATOR", 
                      "IDENTIFIER", "STRING", "NUMBER", "WS" ]

    RULE_query = 0
    RULE_fromClause = 1
    RULE_pipeOperator = 2
    RULE_selectOperator = 3
    RULE_whereOperator = 4
    RULE_orderByOperator = 5
    RULE_unionOperator = 6
    RULE_intersectOperator = 7
    RULE_exceptOperator = 8
    RULE_assertOperator = 9
    RULE_limitClause = 10
    RULE_offsetClause = 11
    RULE_selectExpression = 12
    RULE_orderExpression = 13
    RULE_booleanExpression = 14
    RULE_comparisonOperator = 15
    RULE_payloadExpression = 16
    RULE_expression = 17
    RULE_functionCall = 18
    RULE_literal = 19
    RULE_aliasClause = 20

    ruleNames =  [ "query", "fromClause", "pipeOperator", "selectOperator", 
                   "whereOperator", "orderByOperator", "unionOperator", 
                   "intersectOperator", "exceptOperator", "assertOperator", 
                   "limitClause", "offsetClause", "selectExpression", "orderExpression", 
                   "booleanExpression", "comparisonOperator", "payloadExpression", 
                   "expression", "functionCall", "literal", "aliasClause" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    T__8=9
    T__9=10
    T__10=11
    FROM=12
    SELECT=13
    AS=14
    WHERE=15
    ORDER_BY=16
    ASC=17
    DESC=18
    UNION=19
    INTERSECT=20
    EXCEPT=21
    ASSERT=22
    LIMIT=23
    OFFSET=24
    BETWEEN=25
    AND=26
    PIPE_OPERATOR=27
    IDENTIFIER=28
    STRING=29
    NUMBER=30
    WS=31

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class QueryContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def fromClause(self):
            return self.getTypedRuleContext(PipeQLParser.FromClauseContext,0)


        def EOF(self):
            return self.getToken(PipeQLParser.EOF, 0)

        def pipeOperator(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.PipeOperatorContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.PipeOperatorContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_query

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterQuery" ):
                listener.enterQuery(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitQuery" ):
                listener.exitQuery(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitQuery" ):
                return visitor.visitQuery(self)
            else:
                return visitor.visitChildren(self)




    def query(self):

        localctx = PipeQLParser.QueryContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_query)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 42
            self.fromClause()
            self.state = 46
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==27:
                self.state = 43
                self.pipeOperator()
                self.state = 48
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 49
            self.match(PipeQLParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FromClauseContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def FROM(self):
            return self.getToken(PipeQLParser.FROM, 0)

        def IDENTIFIER(self):
            return self.getToken(PipeQLParser.IDENTIFIER, 0)

        def aliasClause(self):
            return self.getTypedRuleContext(PipeQLParser.AliasClauseContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_fromClause

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterFromClause" ):
                listener.enterFromClause(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitFromClause" ):
                listener.exitFromClause(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitFromClause" ):
                return visitor.visitFromClause(self)
            else:
                return visitor.visitChildren(self)




    def fromClause(self):

        localctx = PipeQLParser.FromClauseContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_fromClause)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 51
            self.match(PipeQLParser.FROM)
            self.state = 52
            self.match(PipeQLParser.IDENTIFIER)
            self.state = 54
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==14:
                self.state = 53
                self.aliasClause()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class PipeOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def PIPE_OPERATOR(self):
            return self.getToken(PipeQLParser.PIPE_OPERATOR, 0)

        def selectOperator(self):
            return self.getTypedRuleContext(PipeQLParser.SelectOperatorContext,0)


        def whereOperator(self):
            return self.getTypedRuleContext(PipeQLParser.WhereOperatorContext,0)


        def orderByOperator(self):
            return self.getTypedRuleContext(PipeQLParser.OrderByOperatorContext,0)


        def unionOperator(self):
            return self.getTypedRuleContext(PipeQLParser.UnionOperatorContext,0)


        def intersectOperator(self):
            return self.getTypedRuleContext(PipeQLParser.IntersectOperatorContext,0)


        def exceptOperator(self):
            return self.getTypedRuleContext(PipeQLParser.ExceptOperatorContext,0)


        def assertOperator(self):
            return self.getTypedRuleContext(PipeQLParser.AssertOperatorContext,0)


        def limitClause(self):
            return self.getTypedRuleContext(PipeQLParser.LimitClauseContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_pipeOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterPipeOperator" ):
                listener.enterPipeOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitPipeOperator" ):
                listener.exitPipeOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitPipeOperator" ):
                return visitor.visitPipeOperator(self)
            else:
                return visitor.visitChildren(self)




    def pipeOperator(self):

        localctx = PipeQLParser.PipeOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_pipeOperator)
        try:
            self.state = 72
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,2,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 56
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 57
                self.selectOperator()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 58
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 59
                self.whereOperator()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 60
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 61
                self.orderByOperator()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 62
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 63
                self.unionOperator()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 64
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 65
                self.intersectOperator()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 66
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 67
                self.exceptOperator()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 68
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 69
                self.assertOperator()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 70
                self.match(PipeQLParser.PIPE_OPERATOR)
                self.state = 71
                self.limitClause()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SelectOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def SELECT(self):
            return self.getToken(PipeQLParser.SELECT, 0)

        def selectExpression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.SelectExpressionContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.SelectExpressionContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_selectOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterSelectOperator" ):
                listener.enterSelectOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitSelectOperator" ):
                listener.exitSelectOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitSelectOperator" ):
                return visitor.visitSelectOperator(self)
            else:
                return visitor.visitChildren(self)




    def selectOperator(self):

        localctx = PipeQLParser.SelectOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_selectOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 74
            self.match(PipeQLParser.SELECT)
            self.state = 75
            self.selectExpression()
            self.state = 80
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 76
                self.match(PipeQLParser.T__0)
                self.state = 77
                self.selectExpression()
                self.state = 82
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class WhereOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def WHERE(self):
            return self.getToken(PipeQLParser.WHERE, 0)

        def booleanExpression(self):
            return self.getTypedRuleContext(PipeQLParser.BooleanExpressionContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_whereOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterWhereOperator" ):
                listener.enterWhereOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitWhereOperator" ):
                listener.exitWhereOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitWhereOperator" ):
                return visitor.visitWhereOperator(self)
            else:
                return visitor.visitChildren(self)




    def whereOperator(self):

        localctx = PipeQLParser.WhereOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_whereOperator)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 83
            self.match(PipeQLParser.WHERE)
            self.state = 84
            self.booleanExpression()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OrderByOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ORDER_BY(self):
            return self.getToken(PipeQLParser.ORDER_BY, 0)

        def orderExpression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.OrderExpressionContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.OrderExpressionContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_orderByOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterOrderByOperator" ):
                listener.enterOrderByOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitOrderByOperator" ):
                listener.exitOrderByOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOrderByOperator" ):
                return visitor.visitOrderByOperator(self)
            else:
                return visitor.visitChildren(self)




    def orderByOperator(self):

        localctx = PipeQLParser.OrderByOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_orderByOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 86
            self.match(PipeQLParser.ORDER_BY)
            self.state = 87
            self.orderExpression()
            self.state = 92
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 88
                self.match(PipeQLParser.T__0)
                self.state = 89
                self.orderExpression()
                self.state = 94
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class UnionOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def UNION(self):
            return self.getToken(PipeQLParser.UNION, 0)

        def query(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.QueryContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.QueryContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_unionOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterUnionOperator" ):
                listener.enterUnionOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitUnionOperator" ):
                listener.exitUnionOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitUnionOperator" ):
                return visitor.visitUnionOperator(self)
            else:
                return visitor.visitChildren(self)




    def unionOperator(self):

        localctx = PipeQLParser.UnionOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_unionOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 95
            self.match(PipeQLParser.UNION)
            self.state = 96
            _la = self._input.LA(1)
            if not(_la==2 or _la==3):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
            self.state = 97
            self.match(PipeQLParser.T__3)
            self.state = 98
            self.query()
            self.state = 103
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 99
                self.match(PipeQLParser.T__0)
                self.state = 100
                self.query()
                self.state = 105
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 106
            self.match(PipeQLParser.T__4)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class IntersectOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def INTERSECT(self):
            return self.getToken(PipeQLParser.INTERSECT, 0)

        def query(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.QueryContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.QueryContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_intersectOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterIntersectOperator" ):
                listener.enterIntersectOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitIntersectOperator" ):
                listener.exitIntersectOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitIntersectOperator" ):
                return visitor.visitIntersectOperator(self)
            else:
                return visitor.visitChildren(self)




    def intersectOperator(self):

        localctx = PipeQLParser.IntersectOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_intersectOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 108
            self.match(PipeQLParser.INTERSECT)
            self.state = 109
            _la = self._input.LA(1)
            if not(_la==2 or _la==3):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
            self.state = 110
            self.match(PipeQLParser.T__3)
            self.state = 111
            self.query()
            self.state = 116
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 112
                self.match(PipeQLParser.T__0)
                self.state = 113
                self.query()
                self.state = 118
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 119
            self.match(PipeQLParser.T__4)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExceptOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EXCEPT(self):
            return self.getToken(PipeQLParser.EXCEPT, 0)

        def query(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.QueryContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.QueryContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_exceptOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExceptOperator" ):
                listener.enterExceptOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExceptOperator" ):
                listener.exitExceptOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitExceptOperator" ):
                return visitor.visitExceptOperator(self)
            else:
                return visitor.visitChildren(self)




    def exceptOperator(self):

        localctx = PipeQLParser.ExceptOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_exceptOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 121
            self.match(PipeQLParser.EXCEPT)
            self.state = 122
            _la = self._input.LA(1)
            if not(_la==2 or _la==3):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
            self.state = 123
            self.match(PipeQLParser.T__3)
            self.state = 124
            self.query()
            self.state = 129
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 125
                self.match(PipeQLParser.T__0)
                self.state = 126
                self.query()
                self.state = 131
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 132
            self.match(PipeQLParser.T__4)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AssertOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ASSERT(self):
            return self.getToken(PipeQLParser.ASSERT, 0)

        def booleanExpression(self):
            return self.getTypedRuleContext(PipeQLParser.BooleanExpressionContext,0)


        def payloadExpression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.PayloadExpressionContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.PayloadExpressionContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_assertOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAssertOperator" ):
                listener.enterAssertOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAssertOperator" ):
                listener.exitAssertOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitAssertOperator" ):
                return visitor.visitAssertOperator(self)
            else:
                return visitor.visitChildren(self)




    def assertOperator(self):

        localctx = PipeQLParser.AssertOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_assertOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 134
            self.match(PipeQLParser.ASSERT)
            self.state = 135
            self.booleanExpression()
            self.state = 140
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 136
                self.match(PipeQLParser.T__0)
                self.state = 137
                self.payloadExpression()
                self.state = 142
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LimitClauseContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def LIMIT(self):
            return self.getToken(PipeQLParser.LIMIT, 0)

        def NUMBER(self):
            return self.getToken(PipeQLParser.NUMBER, 0)

        def offsetClause(self):
            return self.getTypedRuleContext(PipeQLParser.OffsetClauseContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_limitClause

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLimitClause" ):
                listener.enterLimitClause(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLimitClause" ):
                listener.exitLimitClause(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitLimitClause" ):
                return visitor.visitLimitClause(self)
            else:
                return visitor.visitChildren(self)




    def limitClause(self):

        localctx = PipeQLParser.LimitClauseContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_limitClause)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 143
            self.match(PipeQLParser.LIMIT)
            self.state = 144
            self.match(PipeQLParser.NUMBER)
            self.state = 146
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==24:
                self.state = 145
                self.offsetClause()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OffsetClauseContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OFFSET(self):
            return self.getToken(PipeQLParser.OFFSET, 0)

        def NUMBER(self):
            return self.getToken(PipeQLParser.NUMBER, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_offsetClause

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterOffsetClause" ):
                listener.enterOffsetClause(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitOffsetClause" ):
                listener.exitOffsetClause(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOffsetClause" ):
                return visitor.visitOffsetClause(self)
            else:
                return visitor.visitChildren(self)




    def offsetClause(self):

        localctx = PipeQLParser.OffsetClauseContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_offsetClause)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 148
            self.match(PipeQLParser.OFFSET)
            self.state = 149
            self.match(PipeQLParser.NUMBER)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SelectExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(PipeQLParser.ExpressionContext,0)


        def AS(self):
            return self.getToken(PipeQLParser.AS, 0)

        def IDENTIFIER(self):
            return self.getToken(PipeQLParser.IDENTIFIER, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_selectExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterSelectExpression" ):
                listener.enterSelectExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitSelectExpression" ):
                listener.exitSelectExpression(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitSelectExpression" ):
                return visitor.visitSelectExpression(self)
            else:
                return visitor.visitChildren(self)




    def selectExpression(self):

        localctx = PipeQLParser.SelectExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_selectExpression)
        self._la = 0 # Token type
        try:
            self.state = 157
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4, 28, 29, 30]:
                self.enterOuterAlt(localctx, 1)
                self.state = 151
                self.expression()
                self.state = 154
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==14:
                    self.state = 152
                    self.match(PipeQLParser.AS)
                    self.state = 153
                    self.match(PipeQLParser.IDENTIFIER)


                pass
            elif token in [6]:
                self.enterOuterAlt(localctx, 2)
                self.state = 156
                self.match(PipeQLParser.T__5)
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OrderExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(PipeQLParser.ExpressionContext,0)


        def ASC(self):
            return self.getToken(PipeQLParser.ASC, 0)

        def DESC(self):
            return self.getToken(PipeQLParser.DESC, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_orderExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterOrderExpression" ):
                listener.enterOrderExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitOrderExpression" ):
                listener.exitOrderExpression(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOrderExpression" ):
                return visitor.visitOrderExpression(self)
            else:
                return visitor.visitChildren(self)




    def orderExpression(self):

        localctx = PipeQLParser.OrderExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_orderExpression)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 159
            self.expression()
            self.state = 161
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==17 or _la==18:
                self.state = 160
                _la = self._input.LA(1)
                if not(_la==17 or _la==18):
                    self._errHandler.recoverInline(self)
                else:
                    self._errHandler.reportMatch(self)
                    self.consume()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BooleanExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.ExpressionContext,i)


        def comparisonOperator(self):
            return self.getTypedRuleContext(PipeQLParser.ComparisonOperatorContext,0)


        def BETWEEN(self):
            return self.getToken(PipeQLParser.BETWEEN, 0)

        def AND(self):
            return self.getToken(PipeQLParser.AND, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_booleanExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterBooleanExpression" ):
                listener.enterBooleanExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitBooleanExpression" ):
                listener.exitBooleanExpression(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitBooleanExpression" ):
                return visitor.visitBooleanExpression(self)
            else:
                return visitor.visitChildren(self)




    def booleanExpression(self):

        localctx = PipeQLParser.BooleanExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_booleanExpression)
        try:
            self.state = 173
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,13,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 163
                self.expression()
                self.state = 164
                self.comparisonOperator()
                self.state = 165
                self.expression()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 167
                self.expression()
                self.state = 168
                self.match(PipeQLParser.BETWEEN)
                self.state = 169
                self.expression()
                self.state = 170
                self.match(PipeQLParser.AND)
                self.state = 171
                self.expression()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ComparisonOperatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return PipeQLParser.RULE_comparisonOperator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterComparisonOperator" ):
                listener.enterComparisonOperator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitComparisonOperator" ):
                listener.exitComparisonOperator(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitComparisonOperator" ):
                return visitor.visitComparisonOperator(self)
            else:
                return visitor.visitChildren(self)




    def comparisonOperator(self):

        localctx = PipeQLParser.ComparisonOperatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 30, self.RULE_comparisonOperator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 175
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 3968) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class PayloadExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self):
            return self.getTypedRuleContext(PipeQLParser.ExpressionContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_payloadExpression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterPayloadExpression" ):
                listener.enterPayloadExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitPayloadExpression" ):
                listener.exitPayloadExpression(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitPayloadExpression" ):
                return visitor.visitPayloadExpression(self)
            else:
                return visitor.visitChildren(self)




    def payloadExpression(self):

        localctx = PipeQLParser.PayloadExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 32, self.RULE_payloadExpression)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 177
            self.expression()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(PipeQLParser.IDENTIFIER, 0)

        def literal(self):
            return self.getTypedRuleContext(PipeQLParser.LiteralContext,0)


        def functionCall(self):
            return self.getTypedRuleContext(PipeQLParser.FunctionCallContext,0)


        def expression(self):
            return self.getTypedRuleContext(PipeQLParser.ExpressionContext,0)


        def getRuleIndex(self):
            return PipeQLParser.RULE_expression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpression" ):
                listener.enterExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpression" ):
                listener.exitExpression(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitExpression" ):
                return visitor.visitExpression(self)
            else:
                return visitor.visitChildren(self)




    def expression(self):

        localctx = PipeQLParser.ExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 34, self.RULE_expression)
        try:
            self.state = 186
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,14,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 179
                self.match(PipeQLParser.IDENTIFIER)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 180
                self.literal()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 181
                self.functionCall()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 182
                self.match(PipeQLParser.T__3)
                self.state = 183
                self.expression()
                self.state = 184
                self.match(PipeQLParser.T__4)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FunctionCallContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(PipeQLParser.IDENTIFIER, 0)

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(PipeQLParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(PipeQLParser.ExpressionContext,i)


        def getRuleIndex(self):
            return PipeQLParser.RULE_functionCall

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterFunctionCall" ):
                listener.enterFunctionCall(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitFunctionCall" ):
                listener.exitFunctionCall(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitFunctionCall" ):
                return visitor.visitFunctionCall(self)
            else:
                return visitor.visitChildren(self)




    def functionCall(self):

        localctx = PipeQLParser.FunctionCallContext(self, self._ctx, self.state)
        self.enterRule(localctx, 36, self.RULE_functionCall)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 188
            self.match(PipeQLParser.IDENTIFIER)
            self.state = 189
            self.match(PipeQLParser.T__3)
            self.state = 198
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 1879048208) != 0):
                self.state = 190
                self.expression()
                self.state = 195
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==1:
                    self.state = 191
                    self.match(PipeQLParser.T__0)
                    self.state = 192
                    self.expression()
                    self.state = 197
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 200
            self.match(PipeQLParser.T__4)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LiteralContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(PipeQLParser.STRING, 0)

        def NUMBER(self):
            return self.getToken(PipeQLParser.NUMBER, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_literal

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLiteral" ):
                listener.enterLiteral(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLiteral" ):
                listener.exitLiteral(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitLiteral" ):
                return visitor.visitLiteral(self)
            else:
                return visitor.visitChildren(self)




    def literal(self):

        localctx = PipeQLParser.LiteralContext(self, self._ctx, self.state)
        self.enterRule(localctx, 38, self.RULE_literal)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 202
            _la = self._input.LA(1)
            if not(_la==29 or _la==30):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AliasClauseContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def AS(self):
            return self.getToken(PipeQLParser.AS, 0)

        def IDENTIFIER(self):
            return self.getToken(PipeQLParser.IDENTIFIER, 0)

        def getRuleIndex(self):
            return PipeQLParser.RULE_aliasClause

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAliasClause" ):
                listener.enterAliasClause(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAliasClause" ):
                listener.exitAliasClause(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitAliasClause" ):
                return visitor.visitAliasClause(self)
            else:
                return visitor.visitChildren(self)




    def aliasClause(self):

        localctx = PipeQLParser.AliasClauseContext(self, self._ctx, self.state)
        self.enterRule(localctx, 40, self.RULE_aliasClause)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 204
            self.match(PipeQLParser.AS)
            self.state = 205
            self.match(PipeQLParser.IDENTIFIER)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





