#include <stdio.h>
int main(){
    int marks ;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    if (marks>=50 && marks<=100){
        printf("You passed the exam");
    }
    else if (marks>=0 && marks<50){
        printf("You failed the exam");
    }
    else{
        printf("Invalid marks");
    }
     return 0;
}