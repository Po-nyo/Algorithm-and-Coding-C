//
// Created by wkj11 on 2020-05-11.
//
#include <stdlib.h>
#include "queueNode.h"

typedef struct Node {
    DataType data;
    Node* lLink;
    Node* rLink;
} Node;

Node* createNode(DataType data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->lLink = NULL;
    newNode->rLink = NULL;

    return newNode;
}

DataType getData(Node* node) {
    return node->data;
}

void setLeftLink(Node* node, Node* leftNode) {
    node->lLink = leftNode;
}

void setRightLink(Node* node, Node* rightNode) {
    node->rLink = rightNode;
}

Node* getLeftLink(Node* node) {
    return node->lLink;
}

Node* getRightLink(Node* node) {
    return node->rLink;
}

