#include <stdio.h>

int main (void) {

int h , m , s ;
int status; 

printf("Enter h:m:s >");
status = scanf("%d:%d:%d",&h,&m,&s);
printf("Status = %d\n",status);
printf("h=%d, m=%d, s=%d",h,m,s);

/*    
    int num ;
    int flag;
    int status ;
    char skip_ch ;



    do {
    flag = 0 ; 
    printf("Enter a number > ");
    status = scanf ("%d",&num);
    printf("status = %d\n",status);
    
    if (status != 1){
        flag = 1 ;
        scanf ("%c", &skip_ch );
        printf ("%c is not a number!!\n" ,skip_ch);
    }


    } while (flag);

    printf("The number is %d. " , num);
*/
    return(0);
}