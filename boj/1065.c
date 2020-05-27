#include <stdio.h>
#include <stdlib.h>

void hansu(int);

int main () {
    int n;
    scanf("%d", &n);
    hansu(n);

    return 0;
}

void hansu(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        int digit = 0;
        char *p_rmd = (char*)malloc(sizeof(char) * (i + 1));
        count++;
        while(temp != 0) {
            *(p_rmd + digit) = temp % 10;
            temp /= 10;
            digit++;
        }
        int d = *(p_rmd + 0) - *(p_rmd + 1);
        if(digit > 2) {
            for(int k = 1; k < (digit - 1); k++) {
                if( d != (*(p_rmd + k) - *(p_rmd + k + 1))) {
                    count--;
                    break;
                }
            }
        }
        free(p_rmd);
    }
    printf("%d", count);
}
