cmake_minimum_required(VERSION 3.10)
project(z1)

include_directories(Zadanie1)

add_executable(z1 main.cpp)

find_program(CLANG_FORMAT_EXECUTABLE clang-format)

if(CLANG_FORMAT_EXECUTABLE)
    add_custom_target(
        clang_format ALL
        COMMAND ${CLANG_FORMAT_EXECUTABLE} -i ${PROJECT_SOURCE_DIR}/main.cpp
        COMMENT "Formatting code with clang-format"
        DEPENDS ${PROJECT_SOURCE_DIR}/main.cpp
    )

    add_dependencies(z1 clang_format)
else()
    message(WARNING "clang-format not found, skipping code formatting.")
endif()
