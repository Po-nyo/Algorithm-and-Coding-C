cmake_minimum_required(VERSION 3.16)
project(Queue C)

set(CMAKE_C_STANDARD 99)

add_executable(Queue main.c dataType.h queueNode.h queueNode.c queue.h queue.c)