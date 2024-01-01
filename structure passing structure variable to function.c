#include<stdio.h>
struct person
{
    char name[50];
    int age ;
    float salary ;
};
void display(struct person u)
{
    printf("name:%s\n",u.name);
    printf("age:%d\n",u.age);
    printf("salary:%f\n",u.salary);

}
int main()
{
    struct person person1;

   //person1.name="usha" ;direct inisialize kora jabe nh
    strcpy(person1.name,"usha");
    person1.age=21;
    person1.salary=1222222.34;
    display(person1);

    getch();

}





