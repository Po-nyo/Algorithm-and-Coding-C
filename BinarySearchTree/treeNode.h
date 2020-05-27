//
// Created by wkj11 on 2020-05-22.
//

#ifndef BINARYSEARCHTREE_TREENODE_H
#define BINARYSEARCHTREE_TREENODE_H

#include "dataType.h"

typedef struct TreeNode TreeNode;

TreeNode* createNode(DataType data);
DataType getData(TreeNode* treeNode);
void setLeftTree(TreeNode* treeNode, TreeNode* leftTree);
void setRightTree(TreeNode* treeNode, TreeNode* rightTree);
TreeNode* getLeftTree(TreeNode* treeNode);
TreeNode* getRightTree(TreeNode* treeNode);

#endif //BINARYSEARCHTREE_TREENODE_H
