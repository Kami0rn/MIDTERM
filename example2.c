#include <stdio.h>

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int c ;
    c=a ;
    a=b ; 
    b=c ;
    printf("a is %d and b is %d" , a, b);
    return (0);
}
