#include <stdio.h>
#include <stdlib.h>

void move(int no, int x, int y) {
    if(no > 1)
        move(no - 1, x, 6 - x -y); // 1

    printf("plate[%d]: pole %d -> pole %d\n", no, x, y); // 2

    if(no > 1)
        move(no - 1, 6 - x - y, y); // 3
}   

int main() {
    int n;
    printf("Top of Hanoi: input num of plates: ");
    scanf("%d", &n);
    
    move(n, 1, 3);

    return 0;
}
