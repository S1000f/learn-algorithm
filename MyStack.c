#include <stdio.h>
#include <stdlib.h>
#include "MyStack.h"

int main() {
    IntStack s;
    if(Initialize(&s, 64) == -1) {
        puts("failed to build a stack...");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("current num of data : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)Push (2)Pop (3)Peek (4)Print (5)Clear (6)Show capacity (7)Show size (0)exit : \n");
        scanf("%d", &menu);

        if(menu == 0)
            break;
        switch (menu)
        {
        case 1:
            // push
            printf("Push : ");
            scanf("%d", &x);
            if(Push(&s, x) == -1)
                puts("push failed...");
            break;

        case 2:
            // pop
            if(Pop(&s, &x) == -1)
                puts("pop failed...");
            else
                printf("popped data : %d\n", x);
            break;

        case 3:
            if(Peek(&s, &x) == -1)
                puts("peek failed...");
            else
                printf("peeked data : %d\n", x);
            break;

        case 4:
            // print
            Print(&s);
            break;

        case 5:
            // clear
            Clear(&s);
            printf("the stack is cleared...\n");
            break;

        case 6:
            // capacity
            printf("Capacity of the stack: %d\n", Capacity(&s));
            break;

        case 7:
            // show size
            printf("Size of the stack : %d\n", Size(&s));

        default:
            break;
        }
    }
    Terminate(&s);

    return 0;
}