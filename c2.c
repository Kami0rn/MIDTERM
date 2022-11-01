#include <stdio.h>

int main (void) {
    int num ,row,col,space;
    int flag;
    int status ;
    char skip_ch ;



    do {
    flag = 0 ; 
    printf("Enter a number > ");
    status = scanf ("%d",&num);

    if (status != 1){
        flag = 1 ;
        scanf ("%c", &skip_ch );
        printf ("%c is not a number!!\n" ,skip_ch);
    }
    else if (num<=0)
    {
        flag = 1 ;
        printf("%d is not a positive number\n",num);
    }
    else if(num<2) // && num >=0
    {
        flag = 1 ;
        printf("%d is less than 2.\n",num);
    }
    

    }

while (flag);
if(num%2==0){

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
}
else
{
    for ( row = 1 ; row <= num; row++)
{
    for (space = 1 ; space <= (num-(num-row)); space++)
    {
        printf("  ");
    }
    for ( col = row; col <= (2*num-row) ;  col++)
    {
        printf ("* ");
    }
    if (row!=num)
    {
        printf("\n");
    }
}
}


}
