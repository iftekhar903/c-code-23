//write a program that that can take some numbers and display maximum
#include<stdio.h>
int main()
{
   int num[100],n,i;
   printf("how many number :");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf("%d",&num[i]);
   }
   int max =num[0];
   for(i=0;i<n;i++)
   {
       if(max<num[i])
    max=num[i];
   }
    printf("maximum is :%d\n",max);
   // return 0 ;
}
