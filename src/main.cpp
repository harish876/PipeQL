#include "PipeQLLexer.h"
#include "PipeQLParser.h"
#include "PipeQLVisitor.h"
#include "antlr4-runtime.h"
#include "lib/VisitorFactory.h"
#include "nlohmann/json.hpp"
#include <fstream>

int populateTable(std::string table_name, std::vector<nlohmann::json> &data) {
  std::ifstream file("./src/sample/" + table_name + ".json");
  if (!file.is_open()) {
    std::cerr << "Error: Could not open file." << std::endl;
    return 1;
  }

  nlohmann::json records;
  try {
    file >> records;
  } catch (const nlohmann::json::parse_error &e) {
    std::cerr << "JSON Parse Error: " << e.what() << std::endl;
    return 1;
  }

  for (const auto &record : records) {
    data.push_back(record);
  }
  return 0;
}

int main(int argc, const char *argv[]) {
  if (argc < 3) {
    std::cerr << "Usage: " << argv[0]
              << " '<query>' <storage_engine>"
                 "--flags"
              << std::endl;
    return 1;
  }

  std::string query = argv[1];
  std::string engine = argv[2];
  bool is_print_ast = false;

  if (argc > 3) {
    for (int i = 3; i < argc; i++) {
      if (std::string(argv[i]) == "--print_ast") {
        is_print_ast = true;
      }
    }
  }

  antlr4::ANTLRInputStream input(query);
  PipeQLLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  PipeQLParser parser(&tokens);
  auto *tree = parser.query();

  std::vector<nlohmann::json> customers;
  if (populateTable("customers", customers)) {
    std::cout << "Could not populate data for querying" << std::endl;
    return 1;
  }

  std::map<std::string, std::vector<nlohmann::json>> data = {
      {"customers", customers},
  };

  if (is_print_ast) {
    std::cout << tree->toStringTree(true) << std::endl;
  }

  std::cout << "---------------------------------------------------------------"
               "---------"
            << std::endl;

  auto visitor = VisitorFactory::createVisitor(engine, data);
  visitor->visitQuery(tree);

  return 0;
}