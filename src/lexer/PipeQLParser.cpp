
// Generated from /root/PipeQL/src/spec/PipeQL.g4 by ANTLR 4.13.2



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
      "query", "pipeExpression", "selectExpression", "filterExpression", 
      "orderExpression"
    },
    std::vector<std::string>{
      "", "'from'", "'| select'", "'| filter'", "'| order by'", "'.'", "'as'", 
      "','", "'('", "'=>'", "'LIKE'", "')'", "'asc'", "'desc'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
      "REGEX", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,16,56,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,26,8,1,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,2,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,0,0,5,0,2,4,6,8,0,1,1,0,12,
  	13,54,0,10,1,0,0,0,2,25,1,0,0,0,4,27,1,0,0,0,6,44,1,0,0,0,8,52,1,0,0,
  	0,10,11,5,1,0,0,11,13,5,14,0,0,12,14,3,2,1,0,13,12,1,0,0,0,14,15,1,0,
  	0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,17,1,0,0,0,17,18,5,0,0,1,18,1,1,0,
  	0,0,19,20,5,2,0,0,20,26,3,4,2,0,21,22,5,3,0,0,22,26,3,6,3,0,23,24,5,4,
  	0,0,24,26,3,8,4,0,25,19,1,0,0,0,25,21,1,0,0,0,25,23,1,0,0,0,26,3,1,0,
  	0,0,27,28,5,14,0,0,28,29,5,5,0,0,29,30,5,14,0,0,30,31,5,6,0,0,31,32,5,
  	14,0,0,32,41,1,0,0,0,33,34,5,7,0,0,34,35,5,14,0,0,35,36,5,5,0,0,36,37,
  	5,14,0,0,37,38,5,6,0,0,38,40,5,14,0,0,39,33,1,0,0,0,40,43,1,0,0,0,41,
  	39,1,0,0,0,41,42,1,0,0,0,42,5,1,0,0,0,43,41,1,0,0,0,44,45,5,8,0,0,45,
  	46,5,14,0,0,46,47,5,9,0,0,47,48,5,14,0,0,48,49,5,10,0,0,49,50,5,15,0,
  	0,50,51,5,11,0,0,51,7,1,0,0,0,52,53,5,14,0,0,53,54,7,0,0,0,54,9,1,0,0,
  	0,3,15,25,41
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

tree::TerminalNode* PipeQLParser::QueryContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}

tree::TerminalNode* PipeQLParser::QueryContext::EOF() {
  return getToken(PipeQLParser::EOF, 0);
}

std::vector<PipeQLParser::PipeExpressionContext *> PipeQLParser::QueryContext::pipeExpression() {
  return getRuleContexts<PipeQLParser::PipeExpressionContext>();
}

PipeQLParser::PipeExpressionContext* PipeQLParser::QueryContext::pipeExpression(size_t i) {
  return getRuleContext<PipeQLParser::PipeExpressionContext>(i);
}


size_t PipeQLParser::QueryContext::getRuleIndex() const {
  return PipeQLParser::RuleQuery;
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
    setState(10);
    match(PipeQLParser::T__0);
    setState(11);
    match(PipeQLParser::IDENTIFIER);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      pipeExpression();
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28) != 0));
    setState(17);
    match(PipeQLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PipeExpressionContext ------------------------------------------------------------------

PipeQLParser::PipeExpressionContext::PipeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PipeQLParser::SelectExpressionContext* PipeQLParser::PipeExpressionContext::selectExpression() {
  return getRuleContext<PipeQLParser::SelectExpressionContext>(0);
}

PipeQLParser::FilterExpressionContext* PipeQLParser::PipeExpressionContext::filterExpression() {
  return getRuleContext<PipeQLParser::FilterExpressionContext>(0);
}

PipeQLParser::OrderExpressionContext* PipeQLParser::PipeExpressionContext::orderExpression() {
  return getRuleContext<PipeQLParser::OrderExpressionContext>(0);
}


size_t PipeQLParser::PipeExpressionContext::getRuleIndex() const {
  return PipeQLParser::RulePipeExpression;
}


PipeQLParser::PipeExpressionContext* PipeQLParser::pipeExpression() {
  PipeExpressionContext *_localctx = _tracker.createInstance<PipeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, PipeQLParser::RulePipeExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PipeQLParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(19);
        match(PipeQLParser::T__1);
        setState(20);
        selectExpression();
        break;
      }

      case PipeQLParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(21);
        match(PipeQLParser::T__2);
        setState(22);
        filterExpression();
        break;
      }

      case PipeQLParser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(23);
        match(PipeQLParser::T__3);
        setState(24);
        orderExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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

std::vector<tree::TerminalNode *> PipeQLParser::SelectExpressionContext::IDENTIFIER() {
  return getTokens(PipeQLParser::IDENTIFIER);
}

tree::TerminalNode* PipeQLParser::SelectExpressionContext::IDENTIFIER(size_t i) {
  return getToken(PipeQLParser::IDENTIFIER, i);
}


size_t PipeQLParser::SelectExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleSelectExpression;
}


PipeQLParser::SelectExpressionContext* PipeQLParser::selectExpression() {
  SelectExpressionContext *_localctx = _tracker.createInstance<SelectExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, PipeQLParser::RuleSelectExpression);
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
    setState(27);
    match(PipeQLParser::IDENTIFIER);
    setState(28);
    match(PipeQLParser::T__4);
    setState(29);
    match(PipeQLParser::IDENTIFIER);
    setState(30);
    match(PipeQLParser::T__5);
    setState(31);
    match(PipeQLParser::IDENTIFIER);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PipeQLParser::T__6) {
      setState(33);
      match(PipeQLParser::T__6);
      setState(34);
      match(PipeQLParser::IDENTIFIER);
      setState(35);
      match(PipeQLParser::T__4);
      setState(36);
      match(PipeQLParser::IDENTIFIER);
      setState(37);
      match(PipeQLParser::T__5);
      setState(38);
      match(PipeQLParser::IDENTIFIER);
      setState(43);
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

//----------------- FilterExpressionContext ------------------------------------------------------------------

PipeQLParser::FilterExpressionContext::FilterExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PipeQLParser::FilterExpressionContext::IDENTIFIER() {
  return getTokens(PipeQLParser::IDENTIFIER);
}

tree::TerminalNode* PipeQLParser::FilterExpressionContext::IDENTIFIER(size_t i) {
  return getToken(PipeQLParser::IDENTIFIER, i);
}

tree::TerminalNode* PipeQLParser::FilterExpressionContext::REGEX() {
  return getToken(PipeQLParser::REGEX, 0);
}


size_t PipeQLParser::FilterExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleFilterExpression;
}


PipeQLParser::FilterExpressionContext* PipeQLParser::filterExpression() {
  FilterExpressionContext *_localctx = _tracker.createInstance<FilterExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, PipeQLParser::RuleFilterExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(PipeQLParser::T__7);
    setState(45);
    match(PipeQLParser::IDENTIFIER);
    setState(46);
    match(PipeQLParser::T__8);
    setState(47);
    match(PipeQLParser::IDENTIFIER);
    setState(48);
    match(PipeQLParser::T__9);
    setState(49);
    match(PipeQLParser::REGEX);
    setState(50);
    match(PipeQLParser::T__10);
   
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

tree::TerminalNode* PipeQLParser::OrderExpressionContext::IDENTIFIER() {
  return getToken(PipeQLParser::IDENTIFIER, 0);
}


size_t PipeQLParser::OrderExpressionContext::getRuleIndex() const {
  return PipeQLParser::RuleOrderExpression;
}


PipeQLParser::OrderExpressionContext* PipeQLParser::orderExpression() {
  OrderExpressionContext *_localctx = _tracker.createInstance<OrderExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, PipeQLParser::RuleOrderExpression);
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
    setState(52);
    match(PipeQLParser::IDENTIFIER);
    setState(53);
    _la = _input->LA(1);
    if (!(_la == PipeQLParser::T__11

    || _la == PipeQLParser::T__12)) {
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

void PipeQLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pipeqlParserInitialize();
#else
  ::antlr4::internal::call_once(pipeqlParserOnceFlag, pipeqlParserInitialize);
#endif
}
