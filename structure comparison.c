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

    person2.age=22;
    person2.salary =27750.87;

    //person1=person2;

    if (person1.age==person2.age &&person1.salary ==person2.salary )
        printf("person1 equal person2");
    else
         printf("person1 not equal to person2");
    getch();

}



