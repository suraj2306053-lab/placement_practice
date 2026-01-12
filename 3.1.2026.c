#include<stdio.h>
int main()
{
int size;
scanf("%d",&size);
int arr[size],itr;
for(itr=0;itr<size;itr+=1)
{
scanf("%d",&arr[itr]);
}
int max = arr[0];
for(itr=1;itr<size;itr+=1)
{

    if(max<arr[itr])
        max = arr[itr];
}
printf("The max number is %d",max);
    return 0;
}
