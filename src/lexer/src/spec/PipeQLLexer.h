
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace pipeql {


class  PipeQLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, FROM = 12, SELECT = 13, AS = 14, 
    WHERE = 15, ORDER_BY = 16, ASC = 17, DESC = 18, UNION = 19, INTERSECT = 20, 
    EXCEPT = 21, ASSERT = 22, LIMIT = 23, OFFSET = 24, BETWEEN = 25, AND = 26, 
    PIPE_OPERATOR = 27, IDENTIFIER = 28, STRING = 29, NUMBER = 30, WS = 31
  };

  explicit PipeQLLexer(antlr4::CharStream *input);

  ~PipeQLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace pipeql
