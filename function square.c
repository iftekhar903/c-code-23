#include<stdio.h>
int square(int b)
{
    return b*b;
}

int main()
{
    int a;
    printf("enter the number :");
    scanf ("%d",&a);
    int result=square(a) ;
    printf("square is :%d",result);
}
