//
// Created by wkj11 on 2020-05-11.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include <stdbool.h>
#include "queueNode.h"

typedef struct Queue Queue;

Queue* createQueue();
void enqueue(Queue* q, DataType data);
DataType dequeue(Queue* q);
DataType peek(Queue* q);
void printQ(Queue* q);
void freeQueue(Queue* q);
bool isEmpty(Queue* q);


#endif //QUEUE_QUEUE_H
