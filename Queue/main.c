#include <stdio.h>
#include "queue.h"

int main() {

    /* Create Queue and enqueue "Apple", "Banana", "Pineapple" */
    printf("-------------------------------------\n");
    printf("Create Queue and Insert Apple, Banana, Pineapple\n");
    Queue* q = createQueue();
    enqueue(q, "Apple");
    enqueue(q, "Banana");
    enqueue(q, "Pineapple");
    printQ(q);

    /* Test function - peek */
    printf("-------------------------------------\n");
    printf("Peek\n");
    printf("output : %s\n", peek(q));
    printQ(q);

    /* Test function - dequeue */
    printf("-------------------------------------\n");
    printf("Dequeue one time\n");
    printf("output : %s\n", dequeue(q));
    printQ(q);
    printf("-------------------------------------\n");
    printf("Dequeue two times\n");
    printf("output : %s\n", dequeue(q));
    printQ(q);
    printf("-------------------------------------\n");
    printf("Dequeue three times\n");
    printf("output : %s\n", dequeue(q));
    printQ(q);
    printf("-------------------------------------\n");
    printf("Dequeue four times\n");
    printf("output : %s\n", dequeue(q));
    printQ(q);

    printf("-------------------------------------\n");
    printf("Insert Pineapple, Banana, Apple\n");
    enqueue(q, "Pineapple");
    enqueue(q, "Banana");
    enqueue(q, "Apple");
    printQ(q);

    freeQueue(q);
    printf("-------------TEST DONE---------------\n");
    return 0;
}
