#include<stdio.h>
int main()
{
    int x=10,y=23;
    printf("before swap :x=%d,y=%d\n",x,y);
    swapping(&x,&y);
    printf("after swap :x=%d,y=%d\n",x,y);
}
void swapping(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}
