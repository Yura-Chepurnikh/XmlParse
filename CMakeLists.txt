cmake_minimum_required(VERSION 3.10)

project(XmlParse)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(
    app ./src/main.cpp
    
    ./src/syntax_token.cpp
    
    ./src/syntax_kind.cpp
    
    ./src/parser.cpp   
    
    ./src/lexer.cpp
)

