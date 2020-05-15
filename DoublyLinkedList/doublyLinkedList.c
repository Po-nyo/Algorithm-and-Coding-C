//
// Created by wkj11 on 2020-05-14.
//

#include <stdlib.h>
#include <stdio.h>
#include "doublyLinkedList.h"

typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
    int size;
} DoublyLinkedList;

DoublyLinkedList* createLinkedList() {
    DoublyLinkedList* newList = malloc(sizeof(DoublyLinkedList));
    newList->head = NULL;
    newList->tail = NULL;
    newList->size = 0;

    return newList;
}

int getIndexByData(DoublyLinkedList* list, DataType data) {
    int index = 0;
    Node* target = list->head;

    while(target != NULL) {
        if(isMatch(getData(target), data))
            return index;
        target = getRightLink(target);
        index++;
    }

    printf("Data is not in the List\n");
    return -1;
}

Node* searchNodeByIndex(DoublyLinkedList* list, int index) {
    if(index < 0 || index >= getSize(list)) {
        printf("Wrong Index!\n");
        return NULL;
    }
    else {
        Node* target = list->head;
        while (index-- > 0)
            target = getRightLink(target);

        return target;
    }
}

void insertByIndex(DoublyLinkedList* list, int index, DataType data) {
    if(index < 0 || index > getSize(list)) {
        printf("Wrong Index!\n");
        return;
    }
    else {
        Node* newNode = createNode(data);
        if(isEmpty(list)) {
            list->head = newNode;
            list->tail = newNode;
            list->size++;
        }
        else {
            if(index == 0) {
                setRightLink(newNode, list->head);
                setLeftLink(list->head, newNode);
                list->head = newNode;
                list->size++;
            }
            else if(index == getSize(list)) {
                setRightLink(list->tail, newNode);
                setLeftLink(newNode, list->tail);
                list->tail = newNode;
                list->size++;
            }
            else {
                Node* target = searchNodeByIndex(list, index);
                setRightLink(getLeftLink(target), newNode);
                setRightLink(newNode, target);
                setLeftLink(target, newNode);
                list->size++;
            }
        }
    }
}

void deleteByIndex(DoublyLinkedList* list, int index) {
    if(index < 0 || index >= getSize(list)) {
        printf("Wrong Index!\n");
        return;
    }
    else {
        Node* target = searchNodeByIndex(list, index);
        if(index == 0) {
            setLeftLink(getRightLink(target), NULL);
            list->head = getRightLink(target);
            list->size--;
        }
        else if(index == getSize(list)-1) {
            setRightLink(getLeftLink(target), NULL);
            list->tail = getLeftLink(target);
            free(target);
            list->size--;
        }
        else {
            setRightLink(getLeftLink(target), getRightLink(target));
            setLeftLink(getRightLink(target), getLeftLink(target));
            free(target);
            list->size--;
        }
    }
}

void insertLast(DoublyLinkedList* list, DataType data) {
    insertByIndex(list, getSize(list), data);
}

DataType popLast(DoublyLinkedList* list) {
    if(isEmpty(list)) {
        printf("List is Empty!\n");
        return 0;
    }
    else {
        Node* tempNode = list->tail;
        DataType data = getData(tempNode);

        if(tempNode == list->head) {
            list->head = NULL;
            list->tail = NULL;
        }
        else {
            setRightLink(getLeftLink(tempNode), NULL);
            list->tail = getLeftLink(tempNode);
        }
        free(tempNode);
        list->size--;
        return data;
    }
}

void insertFirst(DoublyLinkedList* list, DataType data) {
    insertByIndex(list, 0, data);
}

DataType popFirst(DoublyLinkedList* list) {
    if(isEmpty(list)) {
        printf("List is Empty!\n");
        return 0;
    }
    else {
        Node* tempNode = list->head;
        DataType data = getData(tempNode);
        if(tempNode == list->tail) {
            list->head = NULL;
            list->tail = NULL;
        }
        else {
            setLeftLink(getRightLink(tempNode), NULL);
            list->head = getRightLink(tempNode);
        }
        free(tempNode);
        list->size--;
        return data;
    }
}

void printList(DoublyLinkedList* list) {
    Node* temp = list->head;

    printf("List : ");
    while(temp != NULL) {
        printf("%d ", getData(temp));
        temp = getRightLink(temp);
    }
    printf("\n\n");
}

void clearList(DoublyLinkedList* list) {
    if(!isEmpty(list)) {
        Node *target = list->head;
        Node *newFront = getRightLink(target);

        while (target != NULL) {
            newFront = getRightLink(target);
            free(target);
            target = newFront;
        }
        free(newFront);
    }
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void freeList(DoublyLinkedList* list) {
    clearList(list);
    free(list);
}

bool isEmpty(DoublyLinkedList* list) {
    return getSize(list) == 0;
}

int getSize(DoublyLinkedList* list) {
    return list->size;
}