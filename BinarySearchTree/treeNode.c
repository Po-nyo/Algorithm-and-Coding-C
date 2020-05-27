//
// Created by wkj11 on 2020-05-22.
//

#include <stdlib.h>
#include "treeNode.h"

typedef struct TreeNode {
    DataType data;
    TreeNode* leftTree;
    TreeNode* rightTree;
}TreeNode;

TreeNode* createNode(DataType data) {
    TreeNode* newNode = malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->leftTree = NULL;
    newNode->rightTree = NULL;

    return newNode;
}

DataType getData(TreeNode* treeNode) {
    return treeNode->data;
}

void setLeftTree(TreeNode* treeNode, TreeNode* leftTree) {
    treeNode->leftTree = leftTree;
}

void setRightTree(TreeNode* treeNode, TreeNode* rightTree) {
    treeNode->rightTree = rightTree;
}

TreeNode* getLeftTree(TreeNode* treeNode) {
    return treeNode->leftTree;
}

TreeNode* getRightTree(TreeNode* treeNode) {
    return treeNode->rightTree;
}
