#include<stdio.h>
int main()
{
    int num[5];
    num[0]=10;
    num[1]=5;
    num[2]=20;
    num[3]=30;
    num[4]=80;
//scanf("%d\n",&num[0]);//if i want scan 1 value .
    scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
//or
    int i ;
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

}

