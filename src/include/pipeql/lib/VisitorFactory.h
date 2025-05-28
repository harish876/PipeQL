#ifndef VISITOR_FACTORY_H
#define VISITOR_FACTORY_H

#include "JSONPipeQLVisitor.h"
#include "PipeQLVisitor.h"
#include <map>
#include <string>
#include <vector>

class VisitorFactory {
public:
  static std::unique_ptr<PipeQLVisitor>
  createVisitor(const std::string &engine,
                std::map<std::string, std::vector<nlohmann::json>> &data) {
    if (engine == "json") {
      return std::make_unique<JSONPipeQLVisitor>(data);
    } else {
      throw std::invalid_argument("Unsupported storage engine: " + engine);
    }
  }
};

#endif // VISITOR_FACTORY_H