#include <stdio.h>
int main (void){

int num ,row ,col ,space,flag,status ;
char skip_ch ;





do
{
    printf ("Please enter a positive number> ");
scanf ("%d",&num);
if (num<=0)
{
   
    
    flag = 0 ;
    /*
    printf ("Please enter a positive number> ");
    scanf ("%d",&num);
    status = scanf ("%d",&num);
    */

    if (status !=1)
    {
        flag = 1 ;
        scanf ("%c", &skip_ch );
        printf ("%c is not a number!!\n" ,skip_ch);
         printf("%d is not a positive numbe.r",num);
}
else if (num<2)
{
    printf("%d is less than 2.",num);
}
    }
    
} 
while (flag);
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
    printf("\n");
}


    return(0);

}