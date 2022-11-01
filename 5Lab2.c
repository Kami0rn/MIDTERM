#include <stdio.h>
int maximum(int,int,int,int);
int minimum(int,int,int,int);
float trim_mean(int,int,int,int);

int main (void)
{
int a1,a2,a3,a4 ;
printf("The judges enter score> " );
scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
printf("Max = %d",maximum(a1,a2,a3,a4));
printf("\nMin = %d",minimum(a1,a2,a3,a4));
printf("\nThe score = %.2f",trim_mean(a1,a2,a3,a4));



return (0);
}
int maximum(int a1,int a2,int a3,int a4)
{
    int max ;
    if (a1>a2 && a1>a3 && a1 && a4)
    {
        max = a1 ;
    }
    else if (a2 > a3 && a2 >a4)
    {
        max = a2 ;
    }
    else if (a3 > a4)
    {
        max = a3 ;
    }
    else
    {
        max = a4 ;
    }

    return(max);
    
}
int minimum(int a1,int a2,int a3,int a4)
{
    int min ;
    if (a1<a2 && a1<a3 && a1<a4)
    {
        min = a1 ;
    }
    else if (a2 < a3 && a2 <a4)
    {
        min = a2 ;
    }
    else if (a3 < a4)
    {
        min = a3 ;
    }
    else
    {
        min = a4 ;
    }
    return (min);
}
float trim_mean(int a1,int a2,int a3,int a4)
{
    float mid ;
    mid = ((a1+a2+a3+a4)-minimum(a1,a2,a3,a4)-maximum(a1,a2,a3,a4))/2.00;
    return (mid);
}
