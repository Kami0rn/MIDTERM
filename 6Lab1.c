#include <stdio.h>
void convert_to_seconds(int,int,int);

int main (void)
{
    int a1,a2,a3 ;
    printf ("Emter the time (hh : mm : ss)> ");
    scanf ("%d:%d:%d",&a1,&a2,&a3);
    convert_to_seconds (a1,a2,a3);

return(0);
}
void convert_to_seconds(int a1,int a2,int a3)
{
    int s ;
    s = ((a1*60*60+(a2*60))+a3);
    printf ("Converting to %d second (s)",s);
}

