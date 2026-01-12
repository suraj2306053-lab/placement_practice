#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
 struct employee emp[3];
 int i;
 for(i=0;i<3;i++)
 {
     scanf("%d",&emp[1].id);
     scanf("%s",&emp[1].name);
     scanf("%f",&emp[1].salary);
 }
 for(i=0;i<3;i++)
 {
 printf("Emp Id is %d\n",emp[1].id);
 printf("the name is %s\n",emp[1].name);
 printf("the salary is %.2f\n",emp[1].salary);
}
return 0;
}
