#include <stdio.h>

int main (){

    printf("forward order\n\n");

    for (int i = 1; i <=10; i++){
        printf("%d\n", i);
    }
    printf("\nreverse order\n\n");
    for (int k = 10; k >=1; k--){
        printf("%d\n", k);
    }
    return 0;
}