#include<stdio.h>
int main()
{
    char lower,upper ;
    printf("enter the lower :");
    scanf("%c",&lower);
    upper =toupper(lower);
    printf("the upper is :%c",upper);
    return 0;
}
