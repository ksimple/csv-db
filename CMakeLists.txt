cmake_minimum_required(VERSION 3.10)
project(csv_db)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

find_package(PkgConfig)
# find_package(FLEX REQUIRED)
# find_package(BISON REQUIRED)
pkg_check_modules(Pistache REQUIRED IMPORTED_TARGET libpistache)

# flex_target(QueryScanner src/query_scanner.l ${CMAKE_CURRENT_BINARY_DIR}/query_scanner.c DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/query_scanner.h)
# bison_target(QueryParser src/query_parser.y ${CMAKE_CURRENT_BINARY_DIR}/query_parser.c DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/query_parser.h)
# add_flex_bison_dependency(QueryScanner QueryParser)

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/engine.cpp
    src/table.cpp
    src/csv.cpp
    src/tools.cpp
    antlr/src/query_parserLexer.cpp
    antlr/src/query_parserParser.cpp
    # ${CMAKE_CURRENT_BINARY_DIR}/query_scanner.c
    # ${CMAKE_CURRENT_BINARY_DIR}/query_parser.c
)
target_link_libraries(${PROJECT_NAME} PkgConfig::Pistache)
target_link_libraries(${PROJECT_NAME} /usr/local/lib/libantlr4-runtime.so)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/antlr/src)
target_include_directories(${PROJECT_NAME} PRIVATE /usr/local/include/antlr4-runtime/)
