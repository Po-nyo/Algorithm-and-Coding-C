//
// Created by wkj11 on 2020-05-22.
//

#ifndef BINARYSEARCHTREE_TREENODE_H
#define BINARYSEARCHTREE_TREENODE_H

#include "dataType.h"

typedef struct TreeNode TreeNode;

TreeNode* createNode(DataType data);
void insertData(TreeNode* root, DataType data);
TreeNode* search(TreeNode* treeNode, DataType data);
TreeNode* delete(TreeNode* root, DataType data);
DataType getData(TreeNode* treeNode);
void printInorder(TreeNode* root);
TreeNode* findSuccessor(TreeNode* treeNode);

#endif //BINARYSEARCHTREE_TREENODE_H
