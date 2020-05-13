//
// Created by wkj11 on 2020-05-14.
//

#include <stdlib.h>
#include "stackNode.h"

typedef struct StackNode {
  DataType data;
  StackNode* link;
} StackNode;

StackNode* createNode(DataType data) {
    StackNode* newNode = malloc(sizeof(StackNode));
    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

DataType getData(StackNode* node) {
    return node->data;
}

void setLink(StackNode* node, StackNode* nextNode) {
    node->link = nextNode;
}

StackNode* getLink(StackNode* node) {
    return node->link;
}