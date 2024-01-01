//2 ti variable er jonno sum
#include<stdio.h>
int sum(int a,int b)
{
  return a+b;
}
int main()
{
    int result =sum(5,6);
    printf("the sum is :%d\n",result);//1st print
    result =sum(5,10);
    printf("the sum is :%d\n",result);//2nd print
    //sudhu printf er moddhe sum diclur koreo kora jabe
    printf("the sum is :%d\n",sum(10,20));


}



