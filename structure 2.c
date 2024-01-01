#include<stdio.h>
struct person
{
    int age ;
    float salary ;
};

int main()
{

    struct person person1,person2;

    printf("person 1:\n");
    printf("enter age:");
    scanf("%d",&person1.age);
    printf("enter salary :\n");
    scanf("%f",&person1.salary);
    printf("Age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary );

    printf("\n\n person 2:\n");
    printf("enter age:");
    scanf("%d",&person2.age);
    printf("enter salary:");
    scanf("%f",&person2.salary);
    printf("Age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary );
    getch();

}

