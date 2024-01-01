#include<stdio.h>
int main()
{
   float n1,n2,sum;
    float avg;
    printf("enter two number:");
    scanf("%f%f",&n1,&n2);
    sum=n1+n2;
    printf("the sum is:%f\n",sum);
    avg=(float)sum/2;
    printf("the avarage is=%.1f\n",avg);
    //scanf("%d",&avg);
    return 0;
}
