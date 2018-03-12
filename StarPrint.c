#include <stdio.h>

int main() {
    int k,i;
    for (k = 0;k<=5;k++) {
        for (i=1; i<=k;i++) {
            printf("*");
        }
        printf("\n");
    }
}
