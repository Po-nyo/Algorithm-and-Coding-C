cmake_minimum_required(VERSION 3.16)
project(linkedList C)

set(CMAKE_C_STANDARD 99)

add_executable(linkedList main.c listNode.h listNode.c linkedList.h linkedList.c dataType.h dataType.c)