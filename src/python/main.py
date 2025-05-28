import sys
import json
from antlr4 import *
from PipeQLLexer import PipeQLLexer
from PipeQLParser import PipeQLParser
from JSONPipeQLVisitor import JSONPipeQLVisitor

def populate_table(table_name):
    try:
        with open(f"./src/sample/{table_name}.json", "r") as file:
            records = json.load(file)
            return records
    except FileNotFoundError:
        print("Error: Could not open file.")
        return None
    except json.JSONDecodeError as e:
        print(f"JSON Parse Error: {e}")
        return None

def main(argv):
    if len(argv) < 3:
        print(f"Usage: {argv[0]} '<query>' <storage_engine> --flags")
        return 1

    query = argv[1]
    engine = argv[2]
    is_print_ast = "--print_ast" in argv

    input_stream = InputStream(query)
    lexer = PipeQLLexer(input_stream)
    token_stream = CommonTokenStream(lexer)
    parser = PipeQLParser(token_stream)
    tree = parser.query()

    customers = populate_table("customers")
    if customers is None:
        print("Could not populate data for querying")
        return 1

    data = {"customers": customers}

    if is_print_ast:
        print(tree.toStringTree(recog=parser))

    print("---------------------------------------------------------------"
          "---------")

    visitor = JSONPipeQLVisitor(data)
    visitor.visit(tree)

    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv))
