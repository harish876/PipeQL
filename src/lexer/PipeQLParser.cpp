
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2


#include "PipeQLListener.h"
#include "PipeQLVisitor.h"

#include "PipeQLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PipeQLParserStaticData final {
  PipeQLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PipeQLParserStaticData(const PipeQLParserStaticData&) = delete;
  PipeQLParserStaticData(PipeQLParserStaticData&&) = delete;
  PipeQLParserStaticData& operator=(const PipeQLParserStaticData&) = delete;
  PipeQLParserStaticData& operator=(PipeQLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pipeqlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PipeQLParserStaticData> pipeqlParserStaticData = nullptr;

void pipeqlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pipeqlParserStaticData != nullptr) {
    return;
  }
#else
  assert(pipeqlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PipeQLParserStaticData>(
    std::vector<std::string>{
      "query", "fromClause", "pipeOperator", "selectOperator", "whereOperator", 
      "orderByOperator", "unionOperator", "intersectOperator", "exceptOperator", 
      "assertOperator", "limitClause", "offsetClause", "selectExpression", 
      "orderExpression", "booleanExpression", "payloadExpression", "expression", 
      "functionCall", "literal", "aliasClause"
    },
    std::vector<std::string>{
      "", "','", "'ALL'", "'DISTINCT'", "'('", "')'", "'AS'", "'ASC'", "'DESC'", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "'|>'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "FROM", "SELECT", "WHERE", "ORDER_BY", 
      "UNION", "INTERSECT", "EXCEPT", "ASSERT", "LIMIT", "OFFSET", "AS", 
      "BETWEEN", "AND", "PIPE_OPERATOR", "IDENTIFIER", "STRING", "NUMBER", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,198,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,5,0,43,8,
  	0,10,0,12,0,46,9,0,1,0,1,0,1,1,1,1,1,1,3,1,53,8,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,71,8,2,1,3,1,3,1,3,1,
  	3,5,3,77,8,3,10,3,12,3,80,9,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,89,8,5,
  	10,5,12,5,92,9,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,100,8,6,10,6,12,6,103,9,
  	6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,113,8,7,10,7,12,7,116,9,7,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,8,1,8,5,8,126,8,8,10,8,12,8,129,9,8,1,8,1,8,1,9,1,
  	9,1,9,1,9,5,9,137,8,9,10,9,12,9,140,9,9,1,10,1,10,1,10,3,10,145,8,10,
  	1,11,1,11,1,11,1,12,1,12,1,12,3,12,153,8,12,1,13,1,13,3,13,157,8,13,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,166,8,14,1,15,1,15,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,3,16,177,8,16,1,17,1,17,1,17,1,17,1,17,5,17,184,
  	8,17,10,17,12,17,187,9,17,3,17,189,8,17,1,17,1,17,1,18,1,18,1,19,1,19,
  	1,19,1,19,0,0,20,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,0,3,1,0,2,3,1,0,7,8,1,0,24,25,201,0,40,1,0,0,0,2,49,1,0,0,0,4,70,1,
  	0,0,0,6,72,1,0,0,0,8,81,1,0,0,0,10,84,1,0,0,0,12,93,1,0,0,0,14,106,1,
  	0,0,0,16,119,1,0,0,0,18,132,1,0,0,0,20,141,1,0,0,0,22,146,1,0,0,0,24,
  	149,1,0,0,0,26,154,1,0,0,0,28,165,1,0,0,0,30,167,1,0,0,0,32,176,1,0,0,
  	0,34,178,1,0,0,0,36,192,1,0,0,0,38,194,1,0,0,0,40,44,3,2,1,0,41,43,3,
  	4,2,0,42,41,1,0,0,0,43,46,1,0,0,0,44,42,1,0,0,0,44,45,1,0,0,0,45,47,1,
  	0,0,0,46,44,1,0,0,0,47,48,5,0,0,1,48,1,1,0,0,0,49,50,5,9,0,0,50,52,5,
  	23,0,0,51,53,3,38,19,0,52,51,1,0,0,0,52,53,1,0,0,0,53,3,1,0,0,0,54,55,
  	5,22,0,0,55,71,3,6,3,0,56,57,5,22,0,0,57,71,3,8,4,0,58,59,5,22,0,0,59,
  	71,3,10,5,0,60,61,5,22,0,0,61,71,3,12,6,0,62,63,5,22,0,0,63,71,3,14,7,
  	0,64,65,5,22,0,0,65,71,3,16,8,0,66,67,5,22,0,0,67,71,3,18,9,0,68,69,5,
  	22,0,0,69,71,3,20,10,0,70,54,1,0,0,0,70,56,1,0,0,0,70,58,1,0,0,0,70,60,
  	1,0,0,0,70,62,1,0,0,0,70,64,1,0,0,0,70,66,1,0,0,0,70,68,1,0,0,0,71,5,
  	1,0,0,0,72,73,5,10,0,0,73,78,3,24,12,0,74,75,5,1,0,0,75,77,3,24,12,0,
  	76,74,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,7,1,0,0,0,
  	80,78,1,0,0,0,81,82,5,11,0,0,82,83,3,28,14,0,83,9,1,0,0,0,84,85,5,12,
  	0,0,85,90,3,26,13,0,86,87,5,1,0,0,87,89,3,26,13,0,88,86,1,0,0,0,89,92,
  	1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,11,1,0,0,0,92,90,1,0,0,0,93,94,
  	5,13,0,0,94,95,7,0,0,0,95,96,5,4,0,0,96,101,3,0,0,0,97,98,5,1,0,0,98,
  	100,3,0,0,0,99,97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,
  	0,0,102,104,1,0,0,0,103,101,1,0,0,0,104,105,5,5,0,0,105,13,1,0,0,0,106,
  	107,5,14,0,0,107,108,7,0,0,0,108,109,5,4,0,0,109,114,3,0,0,0,110,111,
  	5,1,0,0,111,113,3,0,0,0,112,110,1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,
  	0,114,115,1,0,0,0,115,117,1,0,0,0,116,114,1,0,0,0,117,118,5,5,0,0,118,
  	15,1,0,0,0,119,120,5,15,0,0,120,121,7,0,0,0,121,122,5,4,0,0,122,127,3,
  	0,0,0,123,124,5,1,0,0,124,126,3,0,0,0,125,123,1,0,0,0,126,129,1,0,0,0,
  	127,125,1,0,0,0,127,128,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,0,130,131,
  	5,5,0,0,131,17,1,0,0,0,132,133,5,16,0,0,133,138,3,28,14,0,134,135,5,1,
  	0,0,135,137,3,30,15,0,136,134,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,
  	138,139,1,0,0,0,139,19,1,0,0,0,140,138,1,0,0,0,141,142,5,17,0,0,142,144,
  	5,25,0,0,143,145,3,22,11,0,144,143,1,0,0,0,144,145,1,0,0,0,145,21,1,0,
  	0,0,146,147,5,18,0,0,147,148,5,25,0,0,148,23,1,0,0,0,149,152,3,32,16,
  	0,150,151,5,6,0,0,151,153,5,23,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,
  	25,1,0,0,0,154,156,3,32,16,0,155,157,7,1,0,0,156,155,1,0,0,0,156,157,
  	1,0,0,0,157,27,1,0,0,0,158,166,3,32,16,0,159,160,3,32,16,0,160,161,5,
  	20,0,0,161,162,3,32,16,0,162,163,5,21,0,0,163,164,3,32,16,0,164,166,1,
  	0,0,0,165,158,1,0,0,0,165,159,1,0,0,0,166,29,1,0,0,0,167,168,3,32,16,
  	0,168,31,1,0,0,0,169,177,5,23,0,0,170,177,3,36,18,0,171,177,3,34,17,0,
  	172,173,5,4,0,0,173,174,3,32,16,0,174,175,5,5,0,0,175,177,1,0,0,0,176,
  	169,1,0,0,0,176,170,1,0,0,0,176,171,1,0,0,0,176,172,1,0,0,0,177,33,1,
  	0,0,0,178,179,5,23,0,0,179,188,5,4,0,0,180,185,3,32,16,0,181,182,5,1,
  	0,0,182,184,3,32,16,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,
  	185,186,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,188,180,1,0,0,0,188,189,
  	1,0,0,0,189,190,1,0,0,0,190,191,5,5,0,0,191,35,1,0,0,0,192,193,7,2,0,
  	0,193,37,1,0,0,0,194,195,5,19,0,0,195,196,5,23,0,0,196,39,1,0,0,0,16,
  	44,52,70,78,90,101,114,127,138,144,152,156,165,176,185,188
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pipeqlParserStaticData = std::move(staticData);
}

}

PipeQLParser::PipeQLParser(TokenStream *input) : PipeQLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PipeQLParser::PipeQLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PipeQLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pipeqlParserStaticData->atn, pipeqlParserStaticData->decisionToDFA, pipeqlParserStaticData->sharedContextCache, options);
}

PipeQLParser::~PipeQLParser() {
  delete _interpreter;
}

const atn::ATN& PipeQLParser::getATN() const {
  return *pipeqlParserStaticData->atn;
}

std::string PipeQLParser::getGrammarFileName() const {
  return "PipeQL.g4";
}

const std::vector<std::string>& PipeQLParser::getRuleNames() const {
  return pipeqlParserStaticData->ruleNames;
}

const dfa::Vocabulary& PipeQLParser::getVocabulary() const {
  return pipeqlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PipeQLParser::getSerializedATN() const {
  return pipeqlParserStaticData->serializedATN;
}


//----------------- QueryContext ------------------------------------------------------------------

PipeQLParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PipeQLParser::FromClauseContext* PipeQLParser::QueryContext::fromClause() {
  return getRuleContext<PipeQLParser::FromClauseContext>(0);
}

tree::TerminalNode* PipeQLParser::QueryContext::EOF() {
  return getToken(PipeQLParser::EOF, 0);
}

std::vector<PipeQLParser::PipeOperatorContext *> PipeQLParser::QueryContext::pipeOperator() {
  return getRuleContexts<PipeQLParser::PipeOperatorContext>();
}

PipeQLParser::PipeOperatorContext* PipeQLParser::QueryContext::pipeOperator(size_t i) {
  return getRuleContext<PipeQLParser::PipeOperatorContext>(i);
}


size_t PipeQLParser::QueryContext::getRuleIndex() const {
  return PipeQLParser::RuleQuery;
}

void PipeQLParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void PipeQLParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any PipeQLParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::QueryContext* PipeQLParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 0, PipeQLParser::RuleQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    fromClause();
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::PIPE_OPERATOR) {
      setState(41);
      pipeOperator();
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(47);
    match(PipeQLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromClauseContext ------------------------------------------------------------------

PipeQLParser::FromClauseContext::FromClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::FromClauseContext::FROM() {
  return getToken(PipeQLParser::FROM, 0);
}

tree::TerminalNode* PipeQLParser::FromClauseContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}

PipeQLParser::AliasClauseContext* PipeQLParser::FromClauseContext::aliasClause() {
  return getRuleContext<PipeQLParser::AliasClauseContext>(0);
}


size_t PipeQLParser::FromClauseContext::getRuleIndex() const {
  return PipeQLParser::RuleFromClause;
}

void PipeQLParser::FromClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFromClause(this);
}

void PipeQLParser::FromClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFromClause(this);
}


std::any PipeQLParser::FromClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitFromClause(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::FromClauseContext* PipeQLParser::fromClause() {
  FromClauseContext *_localctx = _tracker.createInstance<FromClauseContext>(_ctx, getState());
  enterRule(_localctx, 2, PipeQLParser::RuleFromClause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(PipeQLParser::FROM);
    setState(50);
    match(PipeQLParser::IDENTIFIER);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PipeQLParser::AS) {
      setState(51);
      aliasClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PipeOperatorContext ------------------------------------------------------------------

PipeQLParser::PipeOperatorContext::PipeOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::PipeOperatorContext::PIPE_OPERATOR() {
  return getToken(PipeQLParser::PIPE_OPERATOR, 0);
}

PipeQLParser::SelectOperatorContext* PipeQLParser::PipeOperatorContext::selectOperator() {
  return getRuleContext<PipeQLParser::SelectOperatorContext>(0);
}

PipeQLParser::WhereOperatorContext* PipeQLParser::PipeOperatorContext::whereOperator() {
  return getRuleContext<PipeQLParser::WhereOperatorContext>(0);
}

PipeQLParser::OrderByOperatorContext* PipeQLParser::PipeOperatorContext::orderByOperator() {
  return getRuleContext<PipeQLParser::OrderByOperatorContext>(0);
}

PipeQLParser::UnionOperatorContext* PipeQLParser::PipeOperatorContext::unionOperator() {
  return getRuleContext<PipeQLParser::UnionOperatorContext>(0);
}

PipeQLParser::IntersectOperatorContext* PipeQLParser::PipeOperatorContext::intersectOperator() {
  return getRuleContext<PipeQLParser::IntersectOperatorContext>(0);
}

PipeQLParser::ExceptOperatorContext* PipeQLParser::PipeOperatorContext::exceptOperator() {
  return getRuleContext<PipeQLParser::ExceptOperatorContext>(0);
}

PipeQLParser::AssertOperatorContext* PipeQLParser::PipeOperatorContext::assertOperator() {
  return getRuleContext<PipeQLParser::AssertOperatorContext>(0);
}

PipeQLParser::LimitClauseContext* PipeQLParser::PipeOperatorContext::limitClause() {
  return getRuleContext<PipeQLParser::LimitClauseContext>(0);
}


size_t PipeQLParser::PipeOperatorContext::getRuleIndex() const {
  return PipeQLParser::RulePipeOperator;
}

void PipeQLParser::PipeOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPipeOperator(this);
}

void PipeQLParser::PipeOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPipeOperator(this);
}


std::any PipeQLParser::PipeOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitPipeOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::PipeOperatorContext* PipeQLParser::pipeOperator() {
  PipeOperatorContext *_localctx = _tracker.createInstance<PipeOperatorContext>(_ctx, getState());
  enterRule(_localctx, 4, PipeQLParser::RulePipeOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(55);
      selectOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(57);
      whereOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(58);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(59);
      orderByOperator();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(60);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(61);
      unionOperator();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(62);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(63);
      intersectOperator();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(64);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(65);
      exceptOperator();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(66);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(67);
      assertOperator();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(68);
      match(PipeQLParser::PIPE_OPERATOR);
      setState(69);
      limitClause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectOperatorContext ------------------------------------------------------------------

PipeQLParser::SelectOperatorContext::SelectOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::SelectOperatorContext::SELECT() {
  return getToken(PipeQLParser::SELECT, 0);
}

std::vector<PipeQLParser::SelectExpressionContext *> PipeQLParser::SelectOperatorContext::selectExpression() {
  return getRuleContexts<PipeQLParser::SelectExpressionContext>();
}

PipeQLParser::SelectExpressionContext* PipeQLParser::SelectOperatorContext::selectExpression(size_t i) {
  return getRuleContext<PipeQLParser::SelectExpressionContext>(i);
}


size_t PipeQLParser::SelectOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleSelectOperator;
}

void PipeQLParser::SelectOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectOperator(this);
}

void PipeQLParser::SelectOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectOperator(this);
}


std::any PipeQLParser::SelectOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitSelectOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::SelectOperatorContext* PipeQLParser::selectOperator() {
  SelectOperatorContext *_localctx = _tracker.createInstance<SelectOperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, PipeQLParser::RuleSelectOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(PipeQLParser::SELECT);
    setState(73);
    selectExpression();
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(74);
      match(PipeQLParser::T__0);
      setState(75);
      selectExpression();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereOperatorContext ------------------------------------------------------------------

PipeQLParser::WhereOperatorContext::WhereOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::WhereOperatorContext::WHERE() {
  return getToken(PipeQLParser::WHERE, 0);
}

PipeQLParser::BooleanExpressionContext* PipeQLParser::WhereOperatorContext::booleanExpression() {
  return getRuleContext<PipeQLParser::BooleanExpressionContext>(0);
}


size_t PipeQLParser::WhereOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleWhereOperator;
}

void PipeQLParser::WhereOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereOperator(this);
}

void PipeQLParser::WhereOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereOperator(this);
}


std::any PipeQLParser::WhereOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitWhereOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::WhereOperatorContext* PipeQLParser::whereOperator() {
  WhereOperatorContext *_localctx = _tracker.createInstance<WhereOperatorContext>(_ctx, getState());
  enterRule(_localctx, 8, PipeQLParser::RuleWhereOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(PipeQLParser::WHERE);
    setState(82);
    booleanExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderByOperatorContext ------------------------------------------------------------------

PipeQLParser::OrderByOperatorContext::OrderByOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::OrderByOperatorContext::ORDER_BY() {
  return getToken(PipeQLParser::ORDER_BY, 0);
}

std::vector<PipeQLParser::OrderExpressionContext *> PipeQLParser::OrderByOperatorContext::orderExpression() {
  return getRuleContexts<PipeQLParser::OrderExpressionContext>();
}

PipeQLParser::OrderExpressionContext* PipeQLParser::OrderByOperatorContext::orderExpression(size_t i) {
  return getRuleContext<PipeQLParser::OrderExpressionContext>(i);
}


size_t PipeQLParser::OrderByOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleOrderByOperator;
}

void PipeQLParser::OrderByOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderByOperator(this);
}

void PipeQLParser::OrderByOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderByOperator(this);
}


std::any PipeQLParser::OrderByOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitOrderByOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::OrderByOperatorContext* PipeQLParser::orderByOperator() {
  OrderByOperatorContext *_localctx = _tracker.createInstance<OrderByOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, PipeQLParser::RuleOrderByOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(PipeQLParser::ORDER_BY);
    setState(85);
    orderExpression();
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(86);
      match(PipeQLParser::T__0);
      setState(87);
      orderExpression();
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionOperatorContext ------------------------------------------------------------------

PipeQLParser::UnionOperatorContext::UnionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::UnionOperatorContext::UNION() {
  return getToken(PipeQLParser::UNION, 0);
}

std::vector<PipeQLParser::QueryContext *> PipeQLParser::UnionOperatorContext::query() {
  return getRuleContexts<PipeQLParser::QueryContext>();
}

PipeQLParser::QueryContext* PipeQLParser::UnionOperatorContext::query(size_t i) {
  return getRuleContext<PipeQLParser::QueryContext>(i);
}


size_t PipeQLParser::UnionOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleUnionOperator;
}

void PipeQLParser::UnionOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionOperator(this);
}

void PipeQLParser::UnionOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionOperator(this);
}


std::any PipeQLParser::UnionOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitUnionOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::UnionOperatorContext* PipeQLParser::unionOperator() {
  UnionOperatorContext *_localctx = _tracker.createInstance<UnionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, PipeQLParser::RuleUnionOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(PipeQLParser::UNION);
    setState(94);
    _la = _input->LA(1);
    if (!(_la == PipeQLParser::T__1

    || _la == PipeQLParser::T__2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(95);
    match(PipeQLParser::T__3);
    setState(96);
    query();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(97);
      match(PipeQLParser::T__0);
      setState(98);
      query();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(PipeQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntersectOperatorContext ------------------------------------------------------------------

PipeQLParser::IntersectOperatorContext::IntersectOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::IntersectOperatorContext::INTERSECT() {
  return getToken(PipeQLParser::INTERSECT, 0);
}

std::vector<PipeQLParser::QueryContext *> PipeQLParser::IntersectOperatorContext::query() {
  return getRuleContexts<PipeQLParser::QueryContext>();
}

PipeQLParser::QueryContext* PipeQLParser::IntersectOperatorContext::query(size_t i) {
  return getRuleContext<PipeQLParser::QueryContext>(i);
}


size_t PipeQLParser::IntersectOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleIntersectOperator;
}

void PipeQLParser::IntersectOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntersectOperator(this);
}

void PipeQLParser::IntersectOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntersectOperator(this);
}


std::any PipeQLParser::IntersectOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitIntersectOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::IntersectOperatorContext* PipeQLParser::intersectOperator() {
  IntersectOperatorContext *_localctx = _tracker.createInstance<IntersectOperatorContext>(_ctx, getState());
  enterRule(_localctx, 14, PipeQLParser::RuleIntersectOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(PipeQLParser::INTERSECT);
    setState(107);
    _la = _input->LA(1);
    if (!(_la == PipeQLParser::T__1

    || _la == PipeQLParser::T__2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(108);
    match(PipeQLParser::T__3);
    setState(109);
    query();
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(110);
      match(PipeQLParser::T__0);
      setState(111);
      query();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(117);
    match(PipeQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptOperatorContext ------------------------------------------------------------------

PipeQLParser::ExceptOperatorContext::ExceptOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::ExceptOperatorContext::EXCEPT() {
  return getToken(PipeQLParser::EXCEPT, 0);
}

std::vector<PipeQLParser::QueryContext *> PipeQLParser::ExceptOperatorContext::query() {
  return getRuleContexts<PipeQLParser::QueryContext>();
}

PipeQLParser::QueryContext* PipeQLParser::ExceptOperatorContext::query(size_t i) {
  return getRuleContext<PipeQLParser::QueryContext>(i);
}


size_t PipeQLParser::ExceptOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleExceptOperator;
}

void PipeQLParser::ExceptOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptOperator(this);
}

void PipeQLParser::ExceptOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptOperator(this);
}


std::any PipeQLParser::ExceptOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitExceptOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::ExceptOperatorContext* PipeQLParser::exceptOperator() {
  ExceptOperatorContext *_localctx = _tracker.createInstance<ExceptOperatorContext>(_ctx, getState());
  enterRule(_localctx, 16, PipeQLParser::RuleExceptOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(PipeQLParser::EXCEPT);
    setState(120);
    _la = _input->LA(1);
    if (!(_la == PipeQLParser::T__1

    || _la == PipeQLParser::T__2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(121);
    match(PipeQLParser::T__3);
    setState(122);
    query();
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(123);
      match(PipeQLParser::T__0);
      setState(124);
      query();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    match(PipeQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssertOperatorContext ------------------------------------------------------------------

PipeQLParser::AssertOperatorContext::AssertOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::AssertOperatorContext::ASSERT() {
  return getToken(PipeQLParser::ASSERT, 0);
}

PipeQLParser::BooleanExpressionContext* PipeQLParser::AssertOperatorContext::booleanExpression() {
  return getRuleContext<PipeQLParser::BooleanExpressionContext>(0);
}

std::vector<PipeQLParser::PayloadExpressionContext *> PipeQLParser::AssertOperatorContext::payloadExpression() {
  return getRuleContexts<PipeQLParser::PayloadExpressionContext>();
}

PipeQLParser::PayloadExpressionContext* PipeQLParser::AssertOperatorContext::payloadExpression(size_t i) {
  return getRuleContext<PipeQLParser::PayloadExpressionContext>(i);
}


size_t PipeQLParser::AssertOperatorContext::getRuleIndex() const {
  return PipeQLParser::RuleAssertOperator;
}

void PipeQLParser::AssertOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssertOperator(this);
}

void PipeQLParser::AssertOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssertOperator(this);
}


std::any PipeQLParser::AssertOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitAssertOperator(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::AssertOperatorContext* PipeQLParser::assertOperator() {
  AssertOperatorContext *_localctx = _tracker.createInstance<AssertOperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, PipeQLParser::RuleAssertOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(PipeQLParser::ASSERT);
    setState(133);
    booleanExpression();
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__0) {
      setState(134);
      match(PipeQLParser::T__0);
      setState(135);
      payloadExpression();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitClauseContext ------------------------------------------------------------------

PipeQLParser::LimitClauseContext::LimitClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::LimitClauseContext::LIMIT() {
  return getToken(PipeQLParser::LIMIT, 0);
}

tree::TerminalNode* PipeQLParser::LimitClauseContext::NUMBER() {
  return getToken(PipeQLParser::NUMBER, 0);
}

PipeQLParser::OffsetClauseContext* PipeQLParser::LimitClauseContext::offsetClause() {
  return getRuleContext<PipeQLParser::OffsetClauseContext>(0);
}


size_t PipeQLParser::LimitClauseContext::getRuleIndex() const {
  return PipeQLParser::RuleLimitClause;
}

void PipeQLParser::LimitClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitClause(this);
}

void PipeQLParser::LimitClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitClause(this);
}


std::any PipeQLParser::LimitClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitLimitClause(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::LimitClauseContext* PipeQLParser::limitClause() {
  LimitClauseContext *_localctx = _tracker.createInstance<LimitClauseContext>(_ctx, getState());
  enterRule(_localctx, 20, PipeQLParser::RuleLimitClause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(PipeQLParser::LIMIT);
    setState(142);
    match(PipeQLParser::NUMBER);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PipeQLParser::OFFSET) {
      setState(143);
      offsetClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetClauseContext ------------------------------------------------------------------

PipeQLParser::OffsetClauseContext::OffsetClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::OffsetClauseContext::OFFSET() {
  return getToken(PipeQLParser::OFFSET, 0);
}

tree::TerminalNode* PipeQLParser::OffsetClauseContext::NUMBER() {
  return getToken(PipeQLParser::NUMBER, 0);
}


size_t PipeQLParser::OffsetClauseContext::getRuleIndex() const {
  return PipeQLParser::RuleOffsetClause;
}

void PipeQLParser::OffsetClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOffsetClause(this);
}

void PipeQLParser::OffsetClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOffsetClause(this);
}


std::any PipeQLParser::OffsetClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitOffsetClause(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::OffsetClauseContext* PipeQLParser::offsetClause() {
  OffsetClauseContext *_localctx = _tracker.createInstance<OffsetClauseContext>(_ctx, getState());
  enterRule(_localctx, 22, PipeQLParser::RuleOffsetClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(PipeQLParser::OFFSET);
    setState(147);
    match(PipeQLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectExpressionContext ------------------------------------------------------------------

PipeQLParser::SelectExpressionContext::SelectExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PipeQLParser::ExpressionContext* PipeQLParser::SelectExpressionContext::expression() {
  return getRuleContext<PipeQLParser::ExpressionContext>(0);
}

tree::TerminalNode* PipeQLParser::SelectExpressionContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}


size_t PipeQLParser::SelectExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleSelectExpression;
}

void PipeQLParser::SelectExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectExpression(this);
}

void PipeQLParser::SelectExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectExpression(this);
}


std::any PipeQLParser::SelectExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitSelectExpression(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::SelectExpressionContext* PipeQLParser::selectExpression() {
  SelectExpressionContext *_localctx = _tracker.createInstance<SelectExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, PipeQLParser::RuleSelectExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    expression();
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PipeQLParser::T__5) {
      setState(150);
      match(PipeQLParser::T__5);
      setState(151);
      match(PipeQLParser::IDENTIFIER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderExpressionContext ------------------------------------------------------------------

PipeQLParser::OrderExpressionContext::OrderExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PipeQLParser::ExpressionContext* PipeQLParser::OrderExpressionContext::expression() {
  return getRuleContext<PipeQLParser::ExpressionContext>(0);
}


size_t PipeQLParser::OrderExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleOrderExpression;
}

void PipeQLParser::OrderExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderExpression(this);
}

void PipeQLParser::OrderExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderExpression(this);
}


std::any PipeQLParser::OrderExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitOrderExpression(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::OrderExpressionContext* PipeQLParser::orderExpression() {
  OrderExpressionContext *_localctx = _tracker.createInstance<OrderExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, PipeQLParser::RuleOrderExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    expression();
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PipeQLParser::T__6

    || _la == PipeQLParser::T__7) {
      setState(155);
      _la = _input->LA(1);
      if (!(_la == PipeQLParser::T__6

      || _la == PipeQLParser::T__7)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanExpressionContext ------------------------------------------------------------------

PipeQLParser::BooleanExpressionContext::BooleanExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PipeQLParser::ExpressionContext *> PipeQLParser::BooleanExpressionContext::expression() {
  return getRuleContexts<PipeQLParser::ExpressionContext>();
}

PipeQLParser::ExpressionContext* PipeQLParser::BooleanExpressionContext::expression(size_t i) {
  return getRuleContext<PipeQLParser::ExpressionContext>(i);
}

tree::TerminalNode* PipeQLParser::BooleanExpressionContext::BETWEEN() {
  return getToken(PipeQLParser::BETWEEN, 0);
}

tree::TerminalNode* PipeQLParser::BooleanExpressionContext::AND() {
  return getToken(PipeQLParser::AND, 0);
}


size_t PipeQLParser::BooleanExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleBooleanExpression;
}

void PipeQLParser::BooleanExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanExpression(this);
}

void PipeQLParser::BooleanExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanExpression(this);
}


std::any PipeQLParser::BooleanExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitBooleanExpression(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::BooleanExpressionContext* PipeQLParser::booleanExpression() {
  BooleanExpressionContext *_localctx = _tracker.createInstance<BooleanExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, PipeQLParser::RuleBooleanExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(158);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(159);
      expression();
      setState(160);
      match(PipeQLParser::BETWEEN);
      setState(161);
      expression();
      setState(162);
      match(PipeQLParser::AND);
      setState(163);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PayloadExpressionContext ------------------------------------------------------------------

PipeQLParser::PayloadExpressionContext::PayloadExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PipeQLParser::ExpressionContext* PipeQLParser::PayloadExpressionContext::expression() {
  return getRuleContext<PipeQLParser::ExpressionContext>(0);
}


size_t PipeQLParser::PayloadExpressionContext::getRuleIndex() const {
  return PipeQLParser::RulePayloadExpression;
}

void PipeQLParser::PayloadExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPayloadExpression(this);
}

void PipeQLParser::PayloadExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPayloadExpression(this);
}


std::any PipeQLParser::PayloadExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitPayloadExpression(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::PayloadExpressionContext* PipeQLParser::payloadExpression() {
  PayloadExpressionContext *_localctx = _tracker.createInstance<PayloadExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, PipeQLParser::RulePayloadExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PipeQLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::ExpressionContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}

PipeQLParser::LiteralContext* PipeQLParser::ExpressionContext::literal() {
  return getRuleContext<PipeQLParser::LiteralContext>(0);
}

PipeQLParser::FunctionCallContext* PipeQLParser::ExpressionContext::functionCall() {
  return getRuleContext<PipeQLParser::FunctionCallContext>(0);
}

PipeQLParser::ExpressionContext* PipeQLParser::ExpressionContext::expression() {
  return getRuleContext<PipeQLParser::ExpressionContext>(0);
}


size_t PipeQLParser::ExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleExpression;
}

void PipeQLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PipeQLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any PipeQLParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::ExpressionContext* PipeQLParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, PipeQLParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      match(PipeQLParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(171);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(172);
      match(PipeQLParser::T__3);
      setState(173);
      expression();
      setState(174);
      match(PipeQLParser::T__4);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

PipeQLParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::FunctionCallContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}

std::vector<PipeQLParser::ExpressionContext *> PipeQLParser::FunctionCallContext::expression() {
  return getRuleContexts<PipeQLParser::ExpressionContext>();
}

PipeQLParser::ExpressionContext* PipeQLParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<PipeQLParser::ExpressionContext>(i);
}


size_t PipeQLParser::FunctionCallContext::getRuleIndex() const {
  return PipeQLParser::RuleFunctionCall;
}

void PipeQLParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void PipeQLParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any PipeQLParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::FunctionCallContext* PipeQLParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 34, PipeQLParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(PipeQLParser::IDENTIFIER);
    setState(179);
    match(PipeQLParser::T__3);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 58720272) != 0)) {
      setState(180);
      expression();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PipeQLParser::T__0) {
        setState(181);
        match(PipeQLParser::T__0);
        setState(182);
        expression();
        setState(187);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(190);
    match(PipeQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

PipeQLParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::LiteralContext::STRING() {
  return getToken(PipeQLParser::STRING, 0);
}

tree::TerminalNode* PipeQLParser::LiteralContext::NUMBER() {
  return getToken(PipeQLParser::NUMBER, 0);
}


size_t PipeQLParser::LiteralContext::getRuleIndex() const {
  return PipeQLParser::RuleLiteral;
}

void PipeQLParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void PipeQLParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


std::any PipeQLParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::LiteralContext* PipeQLParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 36, PipeQLParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _la = _input->LA(1);
    if (!(_la == PipeQLParser::STRING

    || _la == PipeQLParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasClauseContext ------------------------------------------------------------------

PipeQLParser::AliasClauseContext::AliasClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PipeQLParser::AliasClauseContext::AS() {
  return getToken(PipeQLParser::AS, 0);
}

tree::TerminalNode* PipeQLParser::AliasClauseContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}


size_t PipeQLParser::AliasClauseContext::getRuleIndex() const {
  return PipeQLParser::RuleAliasClause;
}

void PipeQLParser::AliasClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasClause(this);
}

void PipeQLParser::AliasClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PipeQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasClause(this);
}


std::any PipeQLParser::AliasClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PipeQLVisitor*>(visitor))
    return parserVisitor->visitAliasClause(this);
  else
    return visitor->visitChildren(this);
}

PipeQLParser::AliasClauseContext* PipeQLParser::aliasClause() {
  AliasClauseContext *_localctx = _tracker.createInstance<AliasClauseContext>(_ctx, getState());
  enterRule(_localctx, 38, PipeQLParser::RuleAliasClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(PipeQLParser::AS);
    setState(195);
    match(PipeQLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void PipeQLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pipeqlParserInitialize();
#else
  ::antlr4::internal::call_once(pipeqlParserOnceFlag, pipeqlParserInitialize);
#endif
}
