#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
    float d, r, arae, c ;
    printf("Please enter a diameter> ");
    scanf("%f", &d);
    r = d/2 ;
    c = (2*PI*r) ;
    arae = PI*r*r ;
    printf("The area is %.4f \n" ,arae );
    printf("circumference is %.4f" ,c );
    return(0);
}