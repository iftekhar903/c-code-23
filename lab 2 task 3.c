#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("first is greter ",a);
    }
   else if (b>a)
    printf("second is greter",b);

   else
    printf("numbers are equal");

}
