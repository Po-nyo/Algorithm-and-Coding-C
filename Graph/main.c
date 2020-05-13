#include <stdio.h>
#include "./DoublyLinkedList/doublyLinkedList.h"

int main() {
    DoublyLinkedList* list = createLinkedList();

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

    printf("----TEST DONE----\n");

    return 0;
}
