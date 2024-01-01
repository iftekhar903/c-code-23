#include<stdio.h>
int main()
{
  int x=10,y=23;
  int *ptr1,*ptr2;
  ptr1=&x;
  ptr2=&y;
  int temp;

//swapping
   temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
   printf("x=%d\n",x);
   printf("y=%d\n",y);
}
