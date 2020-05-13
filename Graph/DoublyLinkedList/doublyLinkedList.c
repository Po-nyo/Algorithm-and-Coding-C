//
// Created by wkj11 on 2020-05-14.
//

#include <stdlib.h>
#include <stdio.h>
#include "doublyLinkedList.h"

typedef struct DoublyLinkedList {
    Node* front;
    Node* rear;
} DoublyLinkedList;

DoublyLinkedList* createLinkedList() {
    DoublyLinkedList* newList = malloc(sizeof(DoublyLinkedList));
    newList->front = NULL;
    newList->rear = NULL;

    return newList;
}

void insertLast(DoublyLinkedList* list, DataType data) {
    Node* newNode = createNode(data);
    if(isEmpty(list)) {
        list->front = newNode;
        list->rear = newNode;
    }
    else {
        setRightLink(list->rear, newNode);
        setLeftLink(newNode, list->rear);
        list->rear = newNode;
    }
}

DataType popLast(DoublyLinkedList* list) {
    if(isEmpty(list)) {
        printf("List is Empty!\n");
        return 0;
    }
    else {
        Node* tempNode = list->rear;
        DataType data = getData(tempNode);

        if(tempNode == list->front) {
            list->front = NULL;
            list->rear = NULL;
        }
        else {
            setRightLink(getLeftLink(tempNode), NULL);
            list->rear = getLeftLink(tempNode);
        }
        free(tempNode);
        return data;
    }
}

void insertFirst(DoublyLinkedList* list, DataType data) {
    Node* newNode = createNode(data);

    if(isEmpty(list)) {
        list->front = newNode;
        list->rear = newNode;
    }
    else {
        setRightLink(newNode, list->front);
        setLeftLink(list->front, newNode);
    }
    list->front = newNode;
}

DataType popFirst(DoublyLinkedList* list) {
    if(isEmpty(list)) {
        printf("List is Empty!\n");
        return 0;
    }
    else {
        Node* tempNode = list->front;
        DataType data = getData(tempNode);
        if(tempNode == list->rear) {
            list->front = NULL;
            list->rear = NULL;
        }
        else {
            setLeftLink(getRightLink(tempNode), NULL);
            list->front = getRightLink(tempNode);
        }
        free(tempNode);

        return data;
    }
}

void printList(DoublyLinkedList* list) {
    Node* temp = list->front;

    printf("List : ");
    while(temp != NULL) {
        printf("%d ", getData(temp));
        temp = getRightLink(temp);
    }
    printf("\n\n");
}

void freeList(DoublyLinkedList* list) {
    if(!isEmpty(list)) {
        Node *target = list->front;
        Node *newFront = getRightLink(target);

        while (target != NULL) {
            newFront = getRightLink(target);
            free(target);
            target = newFront;
        }
        free(newFront);
    }
    free(list);
}

bool isEmpty(DoublyLinkedList* list) {
    return list->front == NULL;
}