#include <stdio.h>

int main(){

    printf("forward order\n\n");
    int i = 1;
    while (i <=10) {
        printf("%d\n", i);
        i++;
    }
    
    printf("\nreverse order\n\n");
    int k = 10;
    while (k>=1) {
        printf("%d\n", k);
        k--;
    }
    return 0;
}