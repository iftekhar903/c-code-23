#include<stdio.h>
int main()
{
    char lower,upper ;
    printf("enter the upper:");
    scanf("%c",&upper);
    lower =tolower(upper);
    printf("the lower is :%c",lower);
    return 0;
}
