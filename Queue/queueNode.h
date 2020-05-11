//
// Created by wkj11 on 2020-05-11.
//

#ifndef QUEUE_QUEUENODE_H
#define QUEUE_QUEUENODE_H

#include "dataType.h"

typedef struct Node Node;

Node* createNode(DataType data);
DataType getData(Node* node);
void setLeftLink(Node* node, Node* leftNode);
void setRightLink(Node* node, Node* rightNode);
Node* getLeftLink(Node* node);
Node* getRightLink(Node* node);

#endif //QUEUE_QUEUENODE_H
