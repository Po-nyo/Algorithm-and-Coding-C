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
        setRightLink(q->rear, newNode);
        setLeftLink(newNode, q->rear);
        q->rear = newNode;
    }
}

DataType dequeue(Queue* q) {
    if(isEmpty(q)) {
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
            setLeftLink(getRightLink(tempNode), NULL);
            q->front = getRightLink(tempNode);
        }
        free(tempNode);
        return data;
    }
}

DataType peek(Queue* q) {
    if(isEmpty(q)) {
        printf("Queue is Empty!\n");
        return 0;
    }
    else {
        return getData(q->front);
    }
}

void printQ(Queue* q) {
    Node* temp = q->front;

    printf("Queue : ");
    while(temp != NULL) {
        printf("%s ", getData(temp));
        temp = getRightLink(temp);
    }
    printf("\n\n");
}

void freeQueue(Queue* q) {
    if(!isEmpty(q)) {
        Node *target = q->rear;
        Node *newFront = getRightLink(target);

        while (target != NULL) {
            newFront = getRightLink(target);
            free(target);
            target = newFront;
        }
        free(newFront);
    }
    free(q);
}

bool isEmpty(Queue* q) {
    return q->front == NULL;
}
