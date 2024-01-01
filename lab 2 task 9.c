#include<stdio.h>
int main()
{
    int i,h,m,s;
    scanf("%d",&i);
    h=i/3600;
    i=i%3600;
    m=i/60;
    s=i%60;
    printf("Hours: %d Minutes: %d Seconds:%d",h,m,s);


}
