//
// Created by wkj11 on 2020-05-14.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <stdbool.h>
#include "stackNode.h"

typedef struct Stack Stack;

Stack* createStack();
void push(Stack* stack, DataType data);
DataType pop(Stack* stack);
DataType peek(Stack* stack);
bool isEmpty(Stack* stack);
void printStack(Stack* stack);
void freeStack(Stack* stack);


#endif //STACK_STACK_H
