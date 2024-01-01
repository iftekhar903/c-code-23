#include<stdio.h>
double triangle_area(double b,double h);//this is use for line 20
/*
double triangle_area(double b,double h)
{
     return 0.5*b*h;
}
*/
int main()
{
   double base,height;
   printf("enter the base:");//input base
   scanf("%lf",&base);
   printf("enter the height: ");//input height
   scanf("%lf",&height);
   double area=triangle_area(base,height);
   printf("the area is :%.lf\n",area);
}
double triangle_area(double b,double h)
{
     return 0.5*b*h;
}
