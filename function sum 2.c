//main function e print nah kore function e print korbe
#include<stdio.h>
int sum(int a,int b,int c)
{
    int s= a + b + c;
    return s;
}

int main()
{
   int a=10,b=20,c=30;
   int o = sum(a,b,c);
   printf("the sum is :%d\n",o);

}
