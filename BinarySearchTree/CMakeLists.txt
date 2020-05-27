cmake_minimum_required(VERSION 3.16)
project(BinarySearchTree C)

set(CMAKE_C_STANDARD 99)

add_executable(BinarySearchTree main.c dataType.h treeNode.h treeNode.c binarySearchTree.h)