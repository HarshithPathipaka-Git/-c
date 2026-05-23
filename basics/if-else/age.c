#include <stdio.h>
   int main(){
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);

    if (age>=18 && age<100){
        printf("Your adult");   
    }
    else if (age>=13 && age<18){
        printf("Your teenager");
    }

    else if (age>=3 && age<13){
        printf("Your child");
    }
    else{
        printf("Invalid age");
    }
     return 0;
   }