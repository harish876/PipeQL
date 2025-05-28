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

# Create lexer directory if it doesn't exist
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/lexer)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(PipeQL src/spec/PipeQL.g4 PARSER
             PACKAGE pipeql
             VISITOR
             LISTENER
             OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/lexer)

# Include directories
include_directories(
    src/lexer
    src/lib
)

# Source files
set(SOURCES_STAGE
    src/main.cpp
    src/lexer/PipeQLLexer.cpp
    src/lexer/PipeQLParser.cpp
    src/lexer/PipeQLVisitor.cpp
    src/lib/JSONPipeQLVisitor.cpp
    src/lib/VisitorFactory.h
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES_STAGE})

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    antlr4_static
    nlohmann_json::nlohmann_json
    leveldb::leveldb
    Threads::Threads
)

# Install target
install(TARGETS ${PROJECT_NAME} DESTINATION ~/.local/bin)