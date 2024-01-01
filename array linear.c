#include<stdio.h>
int main()
{
    int num[]={10,2,15,20,35,46,85};
    int value,i,pos=-1;
    printf("Enter the value you want to search:");
    scanf("%d",&value);
    for (i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("item is not found");

    }
    else
    {
        printf("The value is found at %d position ",pos);
    }
}
