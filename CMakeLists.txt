cmake_minimum_required(VERSION 4.1)
project(exceptions)

set(CMAKE_CXX_VISIBILITY_PRESET "hidden")
set(CMAKE_VISIBILITY_INLINES_HIDDEN "YES")

add_library(alpha STATIC "alpha.cpp")
add_library(bravo SHARED "bravo.cpp")
add_library(charlie SHARED "charlie.cpp")
add_executable(main "main.cpp")

target_link_libraries(bravo PUBLIC alpha)
target_link_libraries(charlie PUBLIC alpha)
target_link_libraries(main PUBLIC alpha bravo charlie)

include(GenerateExportHeader)
generate_export_header(bravo)
target_include_directories(bravo PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
generate_export_header(charlie)
target_include_directories(charlie PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
