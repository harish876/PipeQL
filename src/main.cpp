#include "antlr4-runtime.h"
#include <iostream>

#include "lexer/PipeQLLexer.h"
#include "lexer/PipeQLParser.h"

// Based on:
// https://www.codeproject.com/Articles/5308882/ANTLR-Parsing-and-Cplusplus-Part-1-Introduction

int main(int argc, const char *argv[]) {
  // Provide the input text in a stream
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " '<query>'" << std::endl;
    return 1;
  }

  // Read the query from the command line
  std::string query = argv[1];

  // Create an input stream for the query
  antlr4::ANTLRInputStream input(query);

  // Create a lexer from the input
  PipeQLLexer lexer(&input);

  // Create a token stream from the lexer
  antlr4::CommonTokenStream tokens(&lexer);

  // Create a parser from the token stream
  PipeQLParser parser(&tokens);

  // Display the parse tree
  antlr4::tree::ParseTree *tree = parser.query();
  std::cout << tree->toStringTree(&parser) << std::endl;

  return 0;
}