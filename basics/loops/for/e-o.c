#include <stdio.h>
int main(){
    printf("even numbers\n\n");
    for (int i = 2; i <= 20; i+=2){
        printf("%d\n", i);
    }
    printf("\nodd numbers\n\n");
    for (int k = 1; k <= 20; k+=2){
        printf("%d\n", k);
    }
    

    return 0;
}