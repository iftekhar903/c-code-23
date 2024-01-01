#include<stdio.h>
int main()
{
    int array2[5],i;
    int array1[5]= {10,20,30,40,50};
    printf("array 1:");
    for(i=0; i<5; i++)
    {
        printf("\n%d",array1[i]);
    }
    //copying all the element from array 1 to array 2 ;
    for (i=0; i<5; i++)
    {
        array2[i]=array1[i];
    }
    printf("\n\n array 2:");

    for(i=0; i<5; i++)
    {
        printf("\n%d",array2[i]);
    }
    getch ();
}
