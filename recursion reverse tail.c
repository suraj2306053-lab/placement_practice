#include<stdio.h>
int digits(int num)
{
    if(num==0)
    return 0;
    printf("%d ",num%10);
    digits(num/10);
}
int main()
{
    int num;
    scanf("%d",&num);
    digits(num);
}
