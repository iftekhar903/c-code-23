#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter n:");
    scanf("%d",&n);
    int count=0;
    for(row=1;row<=n;row++)
    {
       for(col=1;col<=row;col++)
       {
       printf(" %d",++count);
       }
       printf("\n");
    }

}



