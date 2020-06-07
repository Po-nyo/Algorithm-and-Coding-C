#include <stdio.h>
#include "treeNode.h"

int main() {
    TreeNode* root = createNode(20);

    insertData(root, 30);
    insertData(root, 10);
    insertData(root, 40);
    insertData(root, 24);

    if(search(root, 40) != NULL)
        printf("%d is in the Tree\n\n", getData(search(root, 40)));
    else
        printf("Data is not in the Tree\n\n");

    printTree(root);
    printf("\n\n");
    delete(root,10);
    printTree(root);
    printf("\n\n");
    delete(root,24);
    printTree(root);
    printf("\n\n");
    delete(root,40);
    printTree(root);
    printf("\n\n");

    return 0;
}
