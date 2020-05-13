//
// Created by wkj11 on 2020-05-11.
//
#include <stdlib.h>
#include "queueNode.h"

typedef struct Node {
    DataType data;
    Node* link;
} Node;

Node* createNode(DataType data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

DataType getData(Node* node) {
    return node->data;
}

void setLink(Node* node, Node* nextNode) {
    node->link = nextNode;
}

Node* getLink(Node* node) {
    return node->link;
}

