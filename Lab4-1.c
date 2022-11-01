#include <stdio.h>

int main (void){

int num ,row ,col ,space ;
printf ("Please enter a positive number> ");
scanf ("%d",&num);

for ( row = 1 ; row <= num; row++)
{
    for (space = 1 ; space <= (num-row); space++)
    {
        printf("  ");
    }
    for ( col = 1; col <= (2*row-1) ;  col++)
    {
        printf ("* ");
    }
    if (row!=num)
    {
        printf("\n");
    }
    
    
}



    return(0);

}