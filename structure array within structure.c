#include<stdio.h>
struct person
{
    char name[50];
    int age ;
    float salary ;
};

int main()
{
    struct person person[4];
    int i ;
    for(i=0; i<4; i++)
    {
        printf("enter info for person %d\n",i+1);
         printf("enter name =");
         fflush(stdin);
         gets(person[i].name);
        printf("enter Age=");
        scanf("%d",&person[i].age);
        printf("enter salary=");
        scanf("%f",&person[i].salary);

    }
    for(i=0; i<4; i++)
    {
        printf(" \n\n info for person %d\n",i+1);
        printf("name=%s\n",person[i].name);
        printf("Age=%d\n",person[i].age);
        printf("salary=%.2f\n",person[i].salary );

    }

    getch();

}




