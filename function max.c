//name
#include<stdio.h>
int  max(int x[])
{
    int i ;
    int max=x[0];
  for(i=1;i<5;i++)
    {
      if (max<x[i])
        max=x[i];
    }
    return max;
}
int main()
{
    int num[]={10,20,30,40,50};
   int maximumValue=max(num);
    printf("Maximum =%d\n",maximumValue);
}

