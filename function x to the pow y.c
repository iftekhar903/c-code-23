//base^exponent
//2^3=2*2*2=8
#include<stdio.h>
 void calculatePower(double base,double exp)
{
    double result=1,i;
   for(i=1;i<=exp;i++)
   {
       result=result*base;
   }
   printf("%.lf\n",result);
}
int main()
{
 double base,exp;//we use double because power ber hobe double e
  //double result=1,i;
    printf("enter base:");
    scanf("%lf",&base);

    printf("enter exp:");
    scanf("%lf",&exp);
 /*
    result=pow(base,exp);
    printf("%.2lf",result);
   for(i=1;i<=exp;i++)
   {
       result=result*base;//result =1*2=2
                            //2*2=4
   }
   printf("%.lf\n",result);
  */
  calculatePower(base,exp);

}
