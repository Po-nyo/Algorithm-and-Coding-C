//
// Created by wkj11 on 2020-05-11.
//

#ifndef QUEUE_QUEUENODE_H
#define QUEUE_QUEUENODE_H

#include "dataType.h"

typedef struct Node Node;

Node* createNode(DataType data);
DataType getData(Node* node);
void setLink(Node* node, Node* nextNode);
Node* getLink(Node* node);

#endif //QUEUE_QUEUENODE_H
