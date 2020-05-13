//
// Created by wkj11 on 2020-05-14.
//

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

typedef struct Stack {
    StackNode* head;
} Stack;

Stack* createStack() {
    Stack* newStack = malloc(sizeof(Stack));
    newStack->head = NULL;
    return newStack;
}

bool isEmpty(Stack* stack) {
    return stack->head == NULL;
}

void push(Stack* stack, DataType data) {
    StackNode* newNode = createNode(data);
    setLink(newNode, stack->head);
    stack->head = newNode;
}

DataType pop(Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack is Empty!\n");
        return 0;
    }
    else {
        StackNode* temp = stack->head;
        DataType data = getData(temp);
        stack->head = getLink(temp);
        free(temp);

        return data;
    }
}

DataType peek(Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack is Empty!");
        return 0;
    }
    else return getData(stack->head);
}

void printStack(Stack* stack) {
    StackNode* temp = stack->head;

    printf("Stack : ");
    while(temp != NULL) {
        printf("%d ", getData(temp));
        temp = getLink(temp);
    }
    printf("\n\n");
}

void freeStack(Stack* stack) {
    if(!isEmpty(stack)) {
        StackNode *target = stack->head;
        StackNode *newHead = getLink(target);

        while (target != NULL) {
            newHead = getLink(target);
            free(target);
            target = newHead;
        }
        free(newHead);
    }
    free(stack);
}
