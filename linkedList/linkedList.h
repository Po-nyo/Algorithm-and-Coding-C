//
// Created by wkj11 on 2020-05-09.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stdbool.h>
#include "stdlib.h"
#include "listNode.h"

typedef struct LinkedList LinkedList;

LinkedList* createLinkedList();
void insertLast(LinkedList* list, DataType data);
void removeData(LinkedList* list, DataType data);
bool isEmpty(LinkedList* list);
DataType getDataByIndex(LinkedList* list, int index);
void printList(LinkedList* list);
void freeList(LinkedList* list);

#endif //LINKEDLIST_LINKEDLIST_H
