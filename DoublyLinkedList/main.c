#include <stdio.h>
#include "doublyLinkedList.h"

void insertLastTest(DoublyLinkedList* list, DataType data) {
    printf("insertLast %d\n", data);
    insertLast(list, data);
    printList(list);
}

void insertFirstTest(DoublyLinkedList* list, DataType data) {
    printf("insertFirst %d\n", data);
    insertFirst(list, data);
    printList(list);
}

void popFirstTest(DoublyLinkedList* list) {
    printf("popFirst\n");
    popFirst(list);
    printList(list);
}

void popLastTest(DoublyLinkedList* list) {
    printf("popLast\n");
    popLast(list);
    printList(list);
}

void insertByIndexTest(DoublyLinkedList* list, int index, DataType data) {
    printf("insert data : %d, by index : %d\n", data, index);
    insertByIndex(list, index, data);
    printList(list);
}

void deleteByIndexTest(DoublyLinkedList* list, int index) {
    printf("delete by index %d\n", index);
    deleteByIndex(list, index);
    printList(list);
}

int main() {
    DoublyLinkedList* list = createLinkedList();

    insertLastTest(list, 1);
    insertLastTest(list, 2);
    insertFirstTest(list, 3);
    insertFirstTest(list, 4);

    popFirstTest(list);
    popLastTest(list);
    popFirstTest(list);
    popLastTest(list);

    insertByIndexTest(list, 0, 5);
    insertByIndexTest(list, 1, 6);
    insertByIndexTest(list, 1, 7);
    insertByIndexTest(list, 3, 8);

    deleteByIndexTest(list, 0);
    deleteByIndexTest(list, 1);

    printf("get index by data 7 and delete by index\n");
    deleteByIndex(list, getIndexByData(list, 7));
    printList(list);

    freeList(list);
    printf("----TEST DONE----\n");
    return 0;
}
