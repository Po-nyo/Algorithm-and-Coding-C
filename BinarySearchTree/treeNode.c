//
// Created by wkj11 on 2020-05-22.
//

#include <stdio.h>
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

void insertData(TreeNode* root, DataType data) {
    if(data < root->data) {
        if(root->leftTree == NULL)
            root->leftTree = createNode(data);
        else
            insertData(root->leftTree, data);
    }
    else {
        if(root->rightTree == NULL)
            root->rightTree = createNode(data);
        else
            insertData(root->rightTree, data);
    }
}

TreeNode* search(TreeNode* treeNode, DataType data) {
    if(treeNode == NULL)
        return NULL;
    else if(treeNode->data == data)
        return treeNode;
    else if(data < treeNode->data)
        return search(treeNode->leftTree, data);
    else
        return search(treeNode->rightTree, data);
}

void printTree(TreeNode* root) {
    if(root == NULL)
        return;
    printTree(root->leftTree);
    printf("%d ", root->data);
    printTree(root->rightTree);
}

TreeNode* delete(TreeNode* root, DataType data) {
    if(root == NULL)
        return NULL;

    if(data < root->data)
        root->leftTree = delete(root->leftTree, data);
    else if(data > root->data)
        root->rightTree = delete(root->rightTree, data);
    else {
        if(root->leftTree != NULL && root->rightTree != NULL) {
            TreeNode* successor = findSuccessor(root);
            root->data = successor->data;
            root->rightTree = delete(root->rightTree, successor->data);
        }
        else {
            TreeNode* temp;
            if(root->leftTree == NULL)
                temp = root->rightTree;
            else
                temp = root->leftTree;
            free(root);

            return temp;
        }
    }
}

TreeNode* findSuccessor(TreeNode* treeNode) {
    TreeNode* rightTree = treeNode->rightTree;

    while(rightTree->leftTree != NULL)
        rightTree = rightTree->leftTree;

    return rightTree;
}

DataType getData(TreeNode* treeNode) {
    return treeNode->data;
}