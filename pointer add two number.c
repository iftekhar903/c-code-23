#include<stdio.h>
int main()
{
    int x=100,y=200,sum;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2;
    printf("sum=%d\n",sum);
    getch();


}



