#include<stdio.h>
int main()
{
    int x=5;
     printf("value of the x=%d\n",x);
     printf("address of the x=%x\n",&x);
     int *ptr;
     ptr=&x;//x er address point korbe .
     printf("%d\n",x);
     printf("%d\n",&x);
     printf("%d\n",ptr);
     printf("%d\n",*ptr);
     printf("%d\n",&ptr);
     getch();

}
