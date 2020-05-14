#include <stdio.h>
#include "doublyLinkedList.h"

int main() {
    DoublyLinkedList* list = createLinkedList();

    insertFirst(list, 0);

    printf("insertLast 1\n");
    insertLast(list, 1);
    printList(list);
    printf("insertLast 2\n");
    insertLast(list, 2);
    printList(list);
    printf("insertFirst 3\n");
    insertFirst(list, 3);
    printList(list);
    printf("insertFirst 4\n");
    insertFirst(list, 4);
    printList(list);

    printf("popFirst\n");
    popFirst(list);
    printList(list);
    printf("popLast\n");
    popLast(list);
    printList(list);
    printf("popFirst\n");
    popFirst(list);
    printList(list);
    printf("popLast\n");
    popLast(list);
    printList(list);

    printf("insert by index, 0, 1\n");
    insertByIndex(list, 0, 1);
    printList(list);
    insertLast(list, 2);
    insertLast(list, 3);
    insertLast(list, 4);
    printList(list);
    insertByIndex(list, 0, 5);
    insertByIndex(list, 2, 6);
    printList(list);
    insertByIndex(list, 6, 7);
    insertByIndex(list, 8, 7);
    printList(list);


    freeList(list);
    printf("----TEST DONE----\n");
    return 0;
}
