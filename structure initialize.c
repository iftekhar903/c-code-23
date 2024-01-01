#include<stdio.h>
struct person
{
    int age ;
    float salary ;
};

int main()
{

    struct person person1={22,2345.23};//direct person1 initialize.
    struct person person2,person3 ;
    //element wise assignment
    person2.age=21;
    person2.salary =21222.23;
    //structure variable assignment
    person3=person2;

    printf("person 1:\n");
    printf("Age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary );

    printf("person 2:\n");
    printf("Age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary );
     printf("person 3:\n");
    printf("Age=%d\n",person3.age);
    printf("salary=%.2f\n",person3.salary );
    getch();

}


