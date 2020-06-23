#include <stdio.h>
#include "treeNode.h"

void insertDataTest(TreeNode* root, DataType data) {
    printf("Insert data : %d\n", data);
    insertData(root, data);
    printf("Tree : ");
    printTree(root);
    printf("\n\n");
}

void deleteDataTest(TreeNode* root, DataType data) {
    printf("Delete data : %d\n", data);
    delete(root, data);
    printf("Tree : ");
    printTree(root);
    printf("\n\n");
}

int main() {
    TreeNode* root = createNode(20);

    insertDataTest(root, 30);
    insertDataTest(root, 15);
    insertDataTest(root, 40);
    insertDataTest(root, 55);

    printf("\nTest search\n");
    if(search(root, 40) != NULL)
        printf("%d is in the Tree\n\n", getData(search(root, 40)));
    else
        printf("Data is not in the Tree\n\n");

    deleteDataTest(root, 20);
    deleteDataTest(root,22);
    deleteDataTest(root, 55);

    return 0;
}
