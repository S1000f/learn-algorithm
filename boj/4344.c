#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, num;
    double avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        double sum = 0;
        int *p = (int*)malloc(sizeof(int)*num);
        for (int j = 0; j < num; j++) {
            scanf("%d", (p + j));
            sum += *(p + j);
        }
        avg = sum/num;
        sum = 0;
        for (int k = 0; k < num; k++) {
            if (*(p + k) > avg) *(p + k) = 1;
            else *(p + k) = 0;
            sum += *(p + k);
        }
        printf("%.3f%%\n", sum/num*100);
        free(p);
    }
    
    return 0;
}