//
// Created by wkj11 on 2020-05-09.
//

#include <stdlib.h>
#include "listNode.h"

struct ListNode {
    DataType data;
    ListNode* link;
};

ListNode* createNode(DataType data) {
    ListNode* newNode = malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

void setLink(ListNode* node, ListNode* linkNode) {
    node->link = linkNode;
}

ListNode* getLink(ListNode* node) {
    return node->link;
}

DataType getData(ListNode* node) {
    return node->data;
}
