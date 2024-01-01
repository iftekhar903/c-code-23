#include <stdio.h>
enum days_of_week
 {
    sat,sun,mon,tue,wed,thu,fri
 };
int main()
{
    enum days_of_week day1,day2;
    /*
    day1=tue;
    day2=sat;
    printf("day1=%d\n",day1);
    printf("day2=%d\n",day2);
    */
    day1=tue;
    day2=sun;
    int dif=day1-day2;
    printf("day difference =%d\n",dif);

}
