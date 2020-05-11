//
// Created by wkj11 on 2020-05-11.
//
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* newQ = malloc(sizeof(Queue));
    newQ->front = NULL;
    newQ->rear = NULL;

    return newQ;
}

void enqueue(Queue* q, DataType data) {
    Node* newNode = createNode(data);
    if(q->front == NULL) {
        q->front = newNode;
        q->rear = newNode;
    }
    else {
        setRightLink(newNode, q->rear);
        setLeftLink(q->rear, newNode);
        q->rear = newNode;
    }
}

DataType dequeue(Queue* q) {
    if(q->front == NULL) {
        printf("Queue is Empty!\n");
        return 0;
    }
    else {
        Node* tempNode = q->front;
        DataType data = getData(tempNode);

        if(tempNode == q->rear) {
            q->front = NULL;
            q->rear = NULL;
        }
        else {
            setRightLink(getLeftLink(tempNode), NULL);
            q->front = getLeftLink(tempNode);
        }
        free(tempNode);
        return data;
    }
}

DataType peek(Queue* q) {
    if(q->front == NULL) {
        printf("Queue is Empty!\n");
        return 0;
    }
    else {
        return getData(q->front);
    }
}

void printQ(Queue* q) {
    Node* temp = q->rear;

    printf("Queue : ");
    while(temp != NULL) {
        printf("%s ", getData(temp));
        temp = getRightLink(temp);
    }
    printf("\n\n");
}

void freeQueue(Queue* q) {
    Node* target = q->rear;
    Node* newRear = getRightLink(target);

    while(target != NULL) {
        newRear = getRightLink(target);
        free(target);
        target = newRear;
    }
    free(newRear);
    free(q);
}
