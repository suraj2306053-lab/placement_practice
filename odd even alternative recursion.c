#include<stdio.h>
int even(int);
int odd(int);
int odd(int num)
{
    if(num==0)
        return 0;
    even(num-1);
    printf("%d ",num-1);
}
int even(int num)
{
    if(num==0)
        return 0;
        odd(num-1);
        printf("%d ",num+1);
}
int main()
{
    int num;
    scanf("%d",&num);
    odd(num);
}
