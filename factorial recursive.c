#include<stdio.h>
long long int factorial(int num)
{
    if(num == 0 || num == 1)
        return 1;
    return num*(factorial(num-1));
}
int main()
{
int num;
scanf("%d",&num);
printf("The facrtorial of %d is %lld",num,factorial(num));
return 0;
}
