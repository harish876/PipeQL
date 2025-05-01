#include "antlr4-runtime.h"
#include <iostream>

#include "lexer/PipeQLLexer.h"
#include "lexer/PipeQLParser.h"

int main(int argc, const char *argv[]) {
  // Check if a query is provided as input
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

  // Parse the query and get the parse tree
  auto *tree = parser.query();

  // Print the parse tree using ANTLR's toStringTree method
  std::cout << "Parse Tree (AST):" << std::endl;
  std::cout << tree->toStringTree(&parser, true) << std::endl;

  return 0;
}