#include<stdio.h>
int main()
{
    int a,b,sub;
    scanf("%d%d",&a,&b);
    //sub=a-b;
    if(a>b)
        {
            sub=a-b;
    printf("number :%d",sub);
        }
        else if (b>a)
        {
            sub=b-a;
            printf("number :%d",sub);
        }
        else
        {
        sub=a-b;
        printf("%d",sub);
        }
}
