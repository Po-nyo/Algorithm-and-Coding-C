#include <stdio.h>
#include "linkedList.h"

int main() {
    /* Test LinkedList - Function : insertLast */
    printf("-------------------------------------------\n");
    printf("Create LinkedList and insertLast 1, 2, 3\n");
    LinkedList* list = createLinkedList();
    insertLast(list, 1);
    insertLast(list, 2);
    insertLast(list, 3);

    /* Test LinkedList - Function : printList */
    printList(list);

    /* Test LinkedList - Function : getDataByIndex */
    printf("-------------------------------------------\n");
    printf("getDataByIndex 2 : ");
    DataType data = getDataByIndex(list, 2);
    printf("%d\n", data);

    printf("getDataByIndex 3 : ");
    data = getDataByIndex(list, 3);
    printf("%d\n\n\n", data);

    /* Test LinkedList - Function : removeData */
    printf("-------------------------------------------\n");
    printf("removeData : 3\n");
    removeData(list, 3);
    printList(list);

    printf("removeData : 4\n");
    removeData(list, 4);
    printList(list);


    /* Test Function : insertLast */
    printf("-------------------------------------------\n");
    printf("insertLast 5\n");
    insertLast(list, 5);
    printList(list);

    freeList(list);
    printf("---------------- TEST DONE ----------------\n");

    return 0;
}
