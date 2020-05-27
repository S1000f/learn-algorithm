#include <stdio.h>
#include <stdlib.h>

int main() {
    char dial[] = "AAABBBCCCDDDEEEFFFFGGGHHHH";
    int sum = 0;
    char *p = (char*)malloc(sizeof(char) * 16);
    scanf("%s", p);
    for(int i = 0; *(p + i) != '\0'; i++) {
        *(p + i) -= 65;
        sum += (dial[*(p + i)] - 62);
    }
    printf("%d", sum);
    free(p);
    return 0;
}