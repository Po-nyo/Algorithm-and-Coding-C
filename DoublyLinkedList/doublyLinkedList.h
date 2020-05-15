//
// Created by wkj11 on 2020-05-14.
//

#ifndef DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#include <stdbool.h>
#include "node.h"

typedef struct DoublyLinkedList DoublyLinkedList;

DoublyLinkedList* createLinkedList();
Node* searchNodeByIndex(DoublyLinkedList* list, int index);
int getIndexByData(DoublyLinkedList* list, DataType data);
void insertByIndex(DoublyLinkedList* list, int index, DataType data);
void deleteByIndex(DoublyLinkedList* list, int index);
void insertLast(DoublyLinkedList* list, DataType data);
DataType popLast(DoublyLinkedList* list);
void insertFirst(DoublyLinkedList* list, DataType data);
DataType popFirst(DoublyLinkedList* list);
void printList(DoublyLinkedList* list);
void clearList(DoublyLinkedList* list);
void freeList(DoublyLinkedList* list);
bool isEmpty(DoublyLinkedList* list);
int getSize(DoublyLinkedList* list);

#endif //DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_