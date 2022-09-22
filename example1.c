#include <stdio.h>

int main() {
    int age;
    printf("Please enter you age> ");
    fflush(stdin);
    scanf("%d", &age);
    age = 30;
    printf("I'm %d years old.", age);
    return (0);
} 