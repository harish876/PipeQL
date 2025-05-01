# PipeQL
Piped SQL DSL with MLIR lowering

## Building Project

```bash

antlr4 -Dlanguage=Cpp -visitor -o src/lexer -Xexact-output-dir src/spec/PipeQL.g4

git clone https://github.com/harish876/pipeql
sudo apt-get update && sudo apt-get -y install gcc cmake make build-essential python3 python3-pip
pip install conan
conan profile detect
conan source .
conan install . -s build_type=Debug --build missing
conan build . -s build_type=Debug --build missing
./build/Debug/pipeql <query>
```


## Example

```
./build/Debug/pipeql "FROM sales_data |> SELECT id AS sales_id, amount |> ORDER BY amount DESC |> LIMIT 10 OFFSET 5"
```