#include<stdio.h>
int main ()
{
    int a[5]={2,3,4,5,6};
    int *ptr,i;
    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}
