#include <stdio.h>
#include "stack.h"

int main() {
    printf("Create Stack, push 1, 2, 3\n");
    Stack* stack = createStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    printStack(stack);

    printf("-----------------------------------------");
    printf("pop one time\n");
    printf("output : %d\n",pop(stack));
    printStack(stack);
    printf("pop two times\n");
    printf("output : %d\n",pop(stack));
    printStack(stack);
    printf("pop three times\n");
    printf("output : %d\n",pop(stack));
    printStack(stack);
    printf("pop four times\n");
    printf("output : %d\n",pop(stack));
    printStack(stack);



    freeStack(stack);
    printf("----------------TEST DONE----------------");
    return 0;
}
