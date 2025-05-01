
// Generated from src/spec/PipeQL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PipeQLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, FROM = 9, SELECT = 10, WHERE = 11, ORDER_BY = 12, UNION = 13, 
    INTERSECT = 14, EXCEPT = 15, ASSERT = 16, LIMIT = 17, OFFSET = 18, AS = 19, 
    BETWEEN = 20, AND = 21, PIPE_OPERATOR = 22, IDENTIFIER = 23, STRING = 24, 
    NUMBER = 25, WS = 26
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

