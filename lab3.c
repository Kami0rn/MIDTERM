#include <stdio.h>
#include <math.h>
#define DOWN 500
int main(){
    float  rate, i, p, payment, pay, pp, payments, Down, a ;
    printf("Please enter the purchase price> ");
    scanf("%f", &pp);
    printf("Please enter the annul interest rate > ");
    scanf("%f", &rate);
    printf("Please enter the total number of payments> ");
    scanf("%f", &payments);
    printf("****************************** \n") ;
    p = (pp-DOWN) ;
    i = rate/12 ;
    a = pow((1+i),-payments);
    pay = (i*p)/(1-(a));
    printf("The amount borrowed: $%.2f\n" ,p );
    printf("The monthly payment: $%.2f\n" ,pay );
    return(0);
}