#include<stdio.h>
int main()
{
    int row,col,n,i=0;
    printf("enter number of n:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
              printf(" %d ",col);
            //printf(" %c ",col+64);
            //printf(" %c ",row+64);
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
              printf(" %d ",col);
            //printf(" %c ",col+64);
            //printf(" %c ",row+64);
        }
        printf("\n");
    }

}

