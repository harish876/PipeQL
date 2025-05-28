
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2


#include "PipeQLLexer.h"


using namespace antlr4;

using namespace pipeql;


using namespace antlr4;

namespace {

struct PipeQLLexerStaticData final {
  PipeQLLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PipeQLLexerStaticData(const PipeQLLexerStaticData&) = delete;
  PipeQLLexerStaticData(PipeQLLexerStaticData&&) = delete;
  PipeQLLexerStaticData& operator=(const PipeQLLexerStaticData&) = delete;
  PipeQLLexerStaticData& operator=(PipeQLLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pipeqllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PipeQLLexerStaticData> pipeqllexerLexerStaticData = nullptr;

void pipeqllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pipeqllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pipeqllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PipeQLLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "FROM", "SELECT", "AS", "WHERE", "ORDER_BY", "ASC", 
      "DESC", "UNION", "INTERSECT", "EXCEPT", "ASSERT", "LIMIT", "OFFSET", 
      "BETWEEN", "AND", "PIPE_OPERATOR", "IDENTIFIER", "STRING", "NUMBER", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "','", "'ALL'", "'DISTINCT'", "'('", "')'", "'*'", "'=='", "'>'", 
      "'<'", "'>='", "'<='", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "'|>'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "FROM", "SELECT", 
      "AS", "WHERE", "ORDER_BY", "ASC", "DESC", "UNION", "INTERSECT", "EXCEPT", 
      "ASSERT", "LIMIT", "OFFSET", "BETWEEN", "AND", "PIPE_OPERATOR", "IDENTIFIER", 
      "STRING", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,31,231,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	1,26,1,26,1,26,1,27,1,27,5,27,196,8,27,10,27,12,27,199,9,27,1,28,1,28,
  	1,28,1,28,5,28,205,8,28,10,28,12,28,208,9,28,1,28,1,28,1,29,4,29,213,
  	8,29,11,29,12,29,214,1,29,1,29,4,29,219,8,29,11,29,12,29,220,3,29,223,
  	8,29,1,30,4,30,226,8,30,11,30,12,30,227,1,30,1,30,0,0,31,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,
  	33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,
  	28,57,29,59,30,61,31,1,0,25,2,0,70,70,102,102,2,0,82,82,114,114,2,0,79,
  	79,111,111,2,0,77,77,109,109,2,0,83,83,115,115,2,0,69,69,101,101,2,0,
  	76,76,108,108,2,0,67,67,99,99,2,0,84,84,116,116,2,0,65,65,97,97,2,0,87,
  	87,119,119,2,0,72,72,104,104,2,0,68,68,100,100,2,0,66,66,98,98,2,0,89,
  	89,121,121,2,0,85,85,117,117,2,0,78,78,110,110,2,0,73,73,105,105,2,0,
  	88,88,120,120,2,0,80,80,112,112,3,0,65,90,95,95,97,122,4,0,48,57,65,90,
  	95,95,97,122,2,0,34,34,92,92,1,0,48,57,3,0,9,10,13,13,32,32,237,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,1,63,1,0,0,0,3,65,1,0,0,
  	0,5,69,1,0,0,0,7,78,1,0,0,0,9,80,1,0,0,0,11,82,1,0,0,0,13,84,1,0,0,0,
  	15,87,1,0,0,0,17,89,1,0,0,0,19,91,1,0,0,0,21,94,1,0,0,0,23,97,1,0,0,0,
  	25,102,1,0,0,0,27,109,1,0,0,0,29,112,1,0,0,0,31,118,1,0,0,0,33,126,1,
  	0,0,0,35,130,1,0,0,0,37,135,1,0,0,0,39,141,1,0,0,0,41,151,1,0,0,0,43,
  	158,1,0,0,0,45,165,1,0,0,0,47,171,1,0,0,0,49,178,1,0,0,0,51,186,1,0,0,
  	0,53,190,1,0,0,0,55,193,1,0,0,0,57,200,1,0,0,0,59,212,1,0,0,0,61,225,
  	1,0,0,0,63,64,5,44,0,0,64,2,1,0,0,0,65,66,5,65,0,0,66,67,5,76,0,0,67,
  	68,5,76,0,0,68,4,1,0,0,0,69,70,5,68,0,0,70,71,5,73,0,0,71,72,5,83,0,0,
  	72,73,5,84,0,0,73,74,5,73,0,0,74,75,5,78,0,0,75,76,5,67,0,0,76,77,5,84,
  	0,0,77,6,1,0,0,0,78,79,5,40,0,0,79,8,1,0,0,0,80,81,5,41,0,0,81,10,1,0,
  	0,0,82,83,5,42,0,0,83,12,1,0,0,0,84,85,5,61,0,0,85,86,5,61,0,0,86,14,
  	1,0,0,0,87,88,5,62,0,0,88,16,1,0,0,0,89,90,5,60,0,0,90,18,1,0,0,0,91,
  	92,5,62,0,0,92,93,5,61,0,0,93,20,1,0,0,0,94,95,5,60,0,0,95,96,5,61,0,
  	0,96,22,1,0,0,0,97,98,7,0,0,0,98,99,7,1,0,0,99,100,7,2,0,0,100,101,7,
  	3,0,0,101,24,1,0,0,0,102,103,7,4,0,0,103,104,7,5,0,0,104,105,7,6,0,0,
  	105,106,7,5,0,0,106,107,7,7,0,0,107,108,7,8,0,0,108,26,1,0,0,0,109,110,
  	7,9,0,0,110,111,7,4,0,0,111,28,1,0,0,0,112,113,7,10,0,0,113,114,7,11,
  	0,0,114,115,7,5,0,0,115,116,7,1,0,0,116,117,7,5,0,0,117,30,1,0,0,0,118,
  	119,7,2,0,0,119,120,7,1,0,0,120,121,7,12,0,0,121,122,7,5,0,0,122,123,
  	7,1,0,0,123,124,7,13,0,0,124,125,7,14,0,0,125,32,1,0,0,0,126,127,7,9,
  	0,0,127,128,7,4,0,0,128,129,7,7,0,0,129,34,1,0,0,0,130,131,7,12,0,0,131,
  	132,7,5,0,0,132,133,7,4,0,0,133,134,7,7,0,0,134,36,1,0,0,0,135,136,7,
  	15,0,0,136,137,7,16,0,0,137,138,7,17,0,0,138,139,7,2,0,0,139,140,7,16,
  	0,0,140,38,1,0,0,0,141,142,7,17,0,0,142,143,7,16,0,0,143,144,7,8,0,0,
  	144,145,7,5,0,0,145,146,7,1,0,0,146,147,7,4,0,0,147,148,7,5,0,0,148,149,
  	7,7,0,0,149,150,7,8,0,0,150,40,1,0,0,0,151,152,7,5,0,0,152,153,7,18,0,
  	0,153,154,7,7,0,0,154,155,7,5,0,0,155,156,7,19,0,0,156,157,7,8,0,0,157,
  	42,1,0,0,0,158,159,7,9,0,0,159,160,7,4,0,0,160,161,7,4,0,0,161,162,7,
  	5,0,0,162,163,7,1,0,0,163,164,7,8,0,0,164,44,1,0,0,0,165,166,7,6,0,0,
  	166,167,7,17,0,0,167,168,7,3,0,0,168,169,7,17,0,0,169,170,7,8,0,0,170,
  	46,1,0,0,0,171,172,7,2,0,0,172,173,7,0,0,0,173,174,7,0,0,0,174,175,7,
  	4,0,0,175,176,7,5,0,0,176,177,7,8,0,0,177,48,1,0,0,0,178,179,7,13,0,0,
  	179,180,7,5,0,0,180,181,7,8,0,0,181,182,7,10,0,0,182,183,7,5,0,0,183,
  	184,7,5,0,0,184,185,7,16,0,0,185,50,1,0,0,0,186,187,7,9,0,0,187,188,7,
  	16,0,0,188,189,7,12,0,0,189,52,1,0,0,0,190,191,5,124,0,0,191,192,5,62,
  	0,0,192,54,1,0,0,0,193,197,7,20,0,0,194,196,7,21,0,0,195,194,1,0,0,0,
  	196,199,1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,0,198,56,1,0,0,0,199,197,
  	1,0,0,0,200,206,5,34,0,0,201,205,8,22,0,0,202,203,5,92,0,0,203,205,9,
  	0,0,0,204,201,1,0,0,0,204,202,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,
  	206,207,1,0,0,0,207,209,1,0,0,0,208,206,1,0,0,0,209,210,5,34,0,0,210,
  	58,1,0,0,0,211,213,7,23,0,0,212,211,1,0,0,0,213,214,1,0,0,0,214,212,1,
  	0,0,0,214,215,1,0,0,0,215,222,1,0,0,0,216,218,5,46,0,0,217,219,7,23,0,
  	0,218,217,1,0,0,0,219,220,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,
  	223,1,0,0,0,222,216,1,0,0,0,222,223,1,0,0,0,223,60,1,0,0,0,224,226,7,
  	24,0,0,225,224,1,0,0,0,226,227,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,
  	0,228,229,1,0,0,0,229,230,6,30,0,0,230,62,1,0,0,0,8,0,197,204,206,214,
  	220,222,227,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pipeqllexerLexerStaticData = std::move(staticData);
}

}

PipeQLLexer::PipeQLLexer(CharStream *input) : Lexer(input) {
  PipeQLLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pipeqllexerLexerStaticData->atn, pipeqllexerLexerStaticData->decisionToDFA, pipeqllexerLexerStaticData->sharedContextCache);
}

PipeQLLexer::~PipeQLLexer() {
  delete _interpreter;
}

std::string PipeQLLexer::getGrammarFileName() const {
  return "PipeQL.g4";
}

const std::vector<std::string>& PipeQLLexer::getRuleNames() const {
  return pipeqllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PipeQLLexer::getChannelNames() const {
  return pipeqllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PipeQLLexer::getModeNames() const {
  return pipeqllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PipeQLLexer::getVocabulary() const {
  return pipeqllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PipeQLLexer::getSerializedATN() const {
  return pipeqllexerLexerStaticData->serializedATN;
}

const atn::ATN& PipeQLLexer::getATN() const {
  return *pipeqllexerLexerStaticData->atn;
}




void PipeQLLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pipeqllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pipeqllexerLexerOnceFlag, pipeqllexerLexerInitialize);
#endif
}
