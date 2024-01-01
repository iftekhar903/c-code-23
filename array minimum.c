//write a program that that can take some numbers and display minimum
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
   int min =num[0];
   for(i=0;i<n;i++)
   {
       if(min>num[i])
    min=num[i];
   }
    printf("minimum is :%d\n",min);
   // return 0 ;
}

