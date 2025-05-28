# PipeQL
Piped SQL DSL with MLIR lowering

## Building the project
```bash
mkdir -p build 
cd build
cmake ..
make
```


## Example

```bash
./build/pipeql "FROM customers |> SELECT customer_id, customer_name" json
```
