#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[200];
    float salary;
};
int main()
{
    struct employee emp;
    int id;
    char name[200];
    float salary;

    scanf("%d",&id);
    emp.id = id;
    printf("The id is %d\n",id);

    scanf("%s",name);
    strcpy(emp.name,name);
    printf("The name is %s\n",name);

    scanf("%f",&salary);
    emp.salary = salary;
    printf("The salary is %.2f",salary);

    return 0;
}
