#include<stdio.h>
int main()
//main function
{
    int num1,num2;
    printf("enter 2 numbers:");
    scanf("%d%d",&num1,&num2);
    //int sum=num1+num2;
    printf("the sum is :%d\n",sum(num1,num2));
}
//return_type function_name(arguments)
//13-16 line main function er ageo lekha jabe
int sum(int a,int b)
{
  return a+b;
}
