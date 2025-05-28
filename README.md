# PipeQL
Piped SQL DSL with MLIR lowering

## Building the project
```bash
mkdir -p build 
cd build
cmake ..
make
```

## Generating Lexer Files
```bash
antlr4 -Dlanguage=Cpp -visitor -lib src/lexer -o src/lexer src/spec/PipeQL.g4

#Patching the directory. To figure it out
mv src/lexer/src/spec/* src/lexer/ && rm -r src/lexer/src
```


## Example

```bash
./build/pipeql "FROM customers |> SELECT customer_id, customer_name" json
```
