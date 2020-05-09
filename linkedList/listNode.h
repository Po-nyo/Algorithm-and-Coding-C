//
// Created by wkj11 on 2020-05-09.
//

#ifndef LINKEDLIST_LISTNODE_H
#define LINKEDLIST_LISTNODE_H

#include "dataType.h"

typedef struct ListNode ListNode;

ListNode* createNode(DataType);
void setLink(ListNode* node, ListNode* linkNode);
ListNode* getLink(ListNode* node);
DataType getData(ListNode* node);

#endif //LINKEDLIST_LISTNODE_H
