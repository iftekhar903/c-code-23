#include<stdio.h>
int main()
{
    int n1,n2,result;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    result=n1+n2;
    printf("sum=%d\n",result);
    result=n1-n2;
    printf("sub=%d\n",result);
    result=n1*n2;
    printf("multi=%d\n",result);//multiplication
    result=n1/n2;
    printf("div=%d\n",result);//division
    result=n1%n2;
    printf("rem=%d\n",result);//reminder

}
