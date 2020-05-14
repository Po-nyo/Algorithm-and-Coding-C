cmake_minimum_required(VERSION 3.16)
project(DoublyLinkedList C)

set(CMAKE_C_STANDARD 99)

add_executable(DoublyLinkedList main.c dataType.h doublyLinkedList.h doublyLinkedList.c node.h node.c dataType.c)