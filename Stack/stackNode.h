//
// Created by wkj11 on 2020-05-14.
//

#ifndef STACK_STACKNODE_H
#define STACK_STACKNODE_H

#include "dataType.h"

typedef struct StackNode StackNode;

StackNode* createNode(DataType data);
DataType getData(StackNode* node);
void setLink(StackNode* node, StackNode* nextNode);
StackNode* getLink(StackNode* node);

#endif //STACK_STACKNODE_H
