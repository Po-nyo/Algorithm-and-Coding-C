//
// Created by wkj11 on 2020-05-27.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H

#include "treeNode.h"

typedef struct BinarySearchTree BinarySearchTree;

BinarySearchTree* createBST();
void insertData(BinarySearchTree* bst, DataType data);
BinarySearchTree* search(BinarySearchTree* bst, DataType data);
void delete(BinarySearchTree* bst, DataType data);

#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
