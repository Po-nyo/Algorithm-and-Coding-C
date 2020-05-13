//
// Created by wkj11 on 2020-05-14.
//

#ifndef GRAPH_DOUBLYLINKEDLIST_H
#define GRAPH_DOUBLYLINKEDLIST_H

#include <stdbool.h>
#include "node.h"

typedef struct DoublyLinkedList DoublyLinkedList;

DoublyLinkedList* createLinkedList();
void insertLast(DoublyLinkedList* list, DataType data);
DataType popLast(DoublyLinkedList* list);
void insertFirst(DoublyLinkedList* list, DataType data);
DataType popFirst(DoublyLinkedList* list);
void printList(DoublyLinkedList* list);
void freeList(DoublyLinkedList* list);
bool isEmpty(DoublyLinkedList* list);

#endif //GRAPH_DOUBLYLINKEDLIST_