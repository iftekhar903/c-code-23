#include<stdio.h>
int main()
{
    sum(10,20);
    sum(100,200);
    sub(30,40);
    multiplies(5,10);
}
void sum(int a,int b)
{
 printf("the sum is :%d\n",a+b);
}
void sub(int a,int b)
{
 printf("the sub is :%d\n",b-a);
}
void multiplies(int a,int b)
{
 printf("the multiplies is: %d\n",a*b);
}
