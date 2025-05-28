# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

# Set project name
project(pipeql)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# Find required packages
find_package(Threads REQUIRED)
find_package(nlohmann_json 3.10.5 REQUIRED)
find_package(leveldb 1.23 REQUIRED)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antlr4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
set(ANTLR_EXECUTABLE /usr/local/bin/antlr4)

# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Create necessary directories
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/src/parser)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/include/pipeql/parser)

# Generate ANTLR files
set(ANTLR_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/src/parser)
set(GRAMMAR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/src/grammar/PipeQL.g4)

message(STATUS "Grammar file: ${GRAMMAR_FILE}")
message(STATUS "Output directory: ${ANTLR_OUTPUT_DIR}")

execute_process(
    COMMAND ${ANTLR_EXECUTABLE} -Dlanguage=Cpp -visitor -listener -o ${ANTLR_OUTPUT_DIR} ${GRAMMAR_FILE}
    RESULT_VARIABLE ANTLR_RESULT
)

if(NOT ANTLR_RESULT EQUAL 0)
    message(FATAL_ERROR "Failed to generate ANTLR files")
endif()

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src/src
    ${ANTLR_OUTPUT_DIR}
)

# Copy generated headers to public include directory
file(GLOB ANTLR_GENERATED_HEADERS
    "${ANTLR_OUTPUT_DIR}/*.h"
)
file(COPY ${ANTLR_GENERATED_HEADERS} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/src/include/pipeql/parser)

# Source files for the library
set(PIPEQL_LIB_SOURCES
    ${ANTLR_OUTPUT_DIR}/PipeQLLexer.cpp
    ${ANTLR_OUTPUT_DIR}/PipeQLParser.cpp
    ${ANTLR_OUTPUT_DIR}/PipeQLVisitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/src/lib/JSONPipeQLVisitor.cpp
)

# Create library target
add_library(pipeql STATIC ${PIPEQL_LIB_SOURCES})

# Set library properties
set_target_properties(pipeql PROPERTIES
    VERSION 1.0.0
    SOVERSION 1
    PUBLIC_HEADER "src/include/pipeql/parser/PipeQLParser.h;src/include/pipeql/parser/PipeQLVisitor.h;src/include/pipeql/lib/VisitorFactory.h"
)

# Link libraries to pipeql
target_link_libraries(pipeql PUBLIC
    antlr4_static
    nlohmann_json::nlohmann_json
    leveldb::leveldb
    Threads::Threads
)

# Install library and headers
install(TARGETS pipeql
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    PUBLIC_HEADER DESTINATION include/pipeql
)

# Example executable (optional)
add_executable(pipeql_example src/examples/main.cpp)
target_link_libraries(pipeql_example PRIVATE pipeql)