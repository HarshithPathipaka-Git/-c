#include <stdio.h>

int main() {
    char name;

    printf("Enter name :");
    scanf("%c", &name);
    

    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Your name is : %c\n", name);
    printf("Your age is: %d\n", age);

    return 0;
}