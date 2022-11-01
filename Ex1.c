/*
#include <stdio.h>
#include <math.h>
double scale1(double,int);
void scale2 (double,int);

int main (void)
{
    
    double x1 = 1.2 ;
    int y1 =5 ; //return double
    printf("%.2f\n",scale1(x1,y1)); //actual parameters
    double ans = scale1(x1,y1);
    printf("%.2f\n",ans); //void // x1=1.2 , y1=5
    scale2(x1,y1);



}
double scale1  (double x , int y){ //x=x1=1.2 , y=y1=5
    double scale_factor ;
    scale_factor = pow(10 , y); 
    printf ("%.2f",x*scale_factor);
}
void scale2  (double x , int y){
    double scale_factor ;
    scale_factor = pow(10 , y); 
    printf ("%.2f",x*scale_factor);
}
*/
/* function prototypes */
#include<stdio.h>
void draw_circle(void); /* Draws a circle */
void draw_intersect(void); /* Draws intersecting lines */
void draw_base(void); /* Draws a base line */
void draw_triangle(void); /* Draws a triangle */
int main(void) {
/* Draws a circle */
draw_circle();
/* Draws a triangle */
draw_triangle();
/* Draws intersectign lines */
draw_intersect();
return (0);
}
void draw_circle(void) {
printf("    * \n");
printf(" *     * \n");
printf("  *   * \n\n");
}
void draw_intersect(void) {
printf("    /   \\ \n");
printf("   /     \\ \n");
printf("  /       \\ \n");
printf(" /         \\ \n");
printf("/           \\ \n");
}
void draw_base(void) {
printf("----------- \n");
}
void draw_triangle(void) {
draw_intersect();
draw_base();
}