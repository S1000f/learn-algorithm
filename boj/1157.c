#include <stdio.h>

#define MAX_STR 1000001

int main () {
    char p[MAX_STR];
    scanf("%s", p);
    int max;
    int flag;
    int pos[26] = {0, };

    for (int i = 0; p[i] != 0; i++) {
        if (p[i] >= 97)
            p[i] -= 32;
        flag = p[i] - 65;
        pos[flag] += 1;
    }
    max = pos[0];
    flag = 0;
    for (int i = 0; i < 25; i++) {
        if (pos[i + 1] > max) {
            max = pos[i + 1];
            flag = i + 1;
        }
        else if (pos[i + 1] == max)
            flag = -1;
    }
    
   if (flag == -1)
        printf("?");
    else
        printf("%c", 65 + flag);

    return 0;
}