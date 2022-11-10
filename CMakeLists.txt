cmake_minimum_required(VERSION 3.23)
project(learnc C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_COMPILER /usr/local/opt/llvm/bin/clang)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
        main.c
        fib.h
        fib.c
        macro.h
        macro.c
        var_args.c
        var_args.h
        arr.c
        arr.h)

target_compile_definitions(${PROJECT_NAME} PUBLIC DEBUG)