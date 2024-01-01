#include<stdio.h>
//global structure
struct person
{
    int age ;
    float salary ;
};
//struct person person1,person2;//global variable
int main()
{
    /*
    local structure
    struct person
    {
        int age ;
        float salary ;
    };
    */
    struct person person1,person2;//local variable

    person1.age=21;
    person1.salary =21222.23;
    printf("person 1:\n");
    printf("Age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary );

    person2.age=32;
    person2.salary =43222.23;
    printf("person 2:\n");
    printf("Age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary );
    getch();

}
