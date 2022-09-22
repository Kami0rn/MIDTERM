#include <stdio.h>
#include <math.h>
int main(){
    float r, arae1, area2 ;
    printf("Please enter a radius> ");
    scanf("%f", &r);
    arae1 = (2*r)*(2*r);
    area2 = M_PI *r*r ;
    printf("Shaded area is %f \n" ,(arae1-area2)/2 );
    return(0);
}