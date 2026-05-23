#include <stdio.h>
int main(){
    printf("even numbers\n\n");
    int i = 2 ;
    while (i <= 20 ){
        printf("%d\n", i);
        i = i +2;
    }
    printf("\nodd numbers\n\n");
    int k = 1 ;
    while (k <= 20 ){
        printf("%d\n", k);
        k = k +2;

    }
    return 0;
}