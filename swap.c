#include<stdio.h>
int main()
{
    int n1,n2;//n1=10,n2=20
    int temp;
    scanf("%d %d",&n1,&n2);

    temp=n1;//temp =10
    n1=n2;//n1=20
    n2=temp;//n2=10


    printf("n1 =%d\n",n1);
    printf("n2 =%d\n",n2);

}
