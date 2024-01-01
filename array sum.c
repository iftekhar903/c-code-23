#include<stdio.h>
int main()
{
    int num[5],sum=0,i;
    num[0]=1;
    num[1]=5;
    num[2]=2;
    num[3]=3;
    num[4]=8;

    //if i want user give value
    //for(i=0;i<5;i++)
    {
       // scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum +num[i];
    }
    printf("The sum is:%d\n",sum);
    //if i want to find avarage..
    printf("the average is :%.2f\n",(float)sum/5);
}
