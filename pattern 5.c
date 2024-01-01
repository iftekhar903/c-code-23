#include<stdio.h>
int main()
{
    int  row,col,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)//space =n-row
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)//print col number
        {
            printf("%d", row);//not(" %d " )
        }
         printf("\n");
    }

}
