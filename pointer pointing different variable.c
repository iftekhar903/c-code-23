#include<stdio.h>
int main()
{
    int x=100,y=200,z=300;
    int *ptr;

    ptr = &x;
    printf("x=%d\n",*ptr);

    ptr = &y;
    printf("y=%d\n",*ptr);

    ptr = &z;
    printf("z=%d\n",*ptr);


}

