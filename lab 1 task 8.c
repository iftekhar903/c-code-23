#include<stdio.h>
int main()
{
    int a,n,u;
    printf("enter the number :");
    scanf("%d",&a);
    n=a/3;
    printf("Each friend will receive %d chocolates",n);
    u=50-(n*3);
    printf("\n The number of remaining chocolates is %d",u);




    return 0;
}
