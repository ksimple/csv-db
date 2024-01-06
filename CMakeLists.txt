cmake_minimum_required(VERSION 3.10)
project(csv_db)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

find_package(PkgConfig)
pkg_check_modules(Pistache REQUIRED IMPORTED_TARGET libpistache)

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/engine.cpp
    src/table.cpp
    src/csv.cpp
    src/tools.cpp
    antlr/src/QueryLexer.cpp
    antlr/src/QueryParser.cpp
)
target_link_libraries(${PROJECT_NAME} PkgConfig::Pistache)
target_link_libraries(${PROJECT_NAME} /usr/local/lib/libantlr4-runtime.so)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/antlr/src)
target_include_directories(${PROJECT_NAME} PRIVATE /usr/local/include/antlr4-runtime/)
