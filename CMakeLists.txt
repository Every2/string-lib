cmake_minimum_required(VERSION 3.28)
project(string_lib C)

set(CMAKE_C_STANDARD 11)

add_executable(string_lib src/main.c
        include/string_lib.h
        include/vec_string.h
        src/vec_string.c)
