//
// Created by wkj11 on 2020-05-09.
//

#include <stdlib.h>
#include <stdio.h>
#include "linkedList.h"
#include "listNode.h"

struct LinkedList {
    ListNode* head;
    ListNode* tail;
};

LinkedList* createLinkedList() {
    LinkedList* list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;

    return list;
}
bool isEmpty(LinkedList* list) {
    return list->head == NULL;
}

void insertLast(LinkedList* list, DataType data) {
    ListNode* newNode = createNode(data);

    if(isEmpty(list)) {
        list->head = newNode;
        list->tail = newNode;
    }
    else {
        setLink(list->tail, newNode);
        list->tail = newNode;
    }
}

DataType getDataByIndex(LinkedList* list, int index) {
    ListNode* searching = list->head;

    while(index-- > 0 && searching != NULL) {
        searching = getLink(searching);
    }

    if(searching == NULL) {
        printf("Error!! Index not in range\n");
        return 0;
    }

    return getData(searching);
}

void removeData(LinkedList* list, DataType data) {
    ListNode* current = list->head;

    if(isMatch(getData(current), data)) {
        list->head = getLink(current);
        free(current);
    }
    else {
        ListNode* prev = list->head;
        current = getLink(current);

        while(current != NULL) {
            if(isMatch(getData(current), data)) {
                setLink(prev, getLink(current));
                free(current);
                if(getLink(prev) == NULL)
                    list->tail = prev;
                return;
            }
            prev = getLink(prev);
            current = getLink(current);
        }

        printf("List do not contains Input data\n");
    }
}

void printList(LinkedList* list) {
    ListNode* node = list->head;

    printf("list : ");
    while(node != NULL) {
        printf("%d ", getData(node));
        node = getLink(node);
    }
    printf("\n\n");
}

void freeList(LinkedList* list) {
    ListNode* target = list->head;
    ListNode* newHead = getLink(target);

    while(target != NULL) {
        newHead = getLink(target);
        free(target);
        target = newHead;
    }
    free(newHead);
    free(list);
}

