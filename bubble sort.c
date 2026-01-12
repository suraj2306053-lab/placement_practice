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
int pass,com,temp;
for(pass=0;pass<=size-2;pass+=1)
{
    for(com=0;com<=size-2-pass;com+=1)
    {
        if(arr[com]>arr[com+1])//change greater than to less than to find the descending order
        {
            temp=arr[com];
            arr[com]=arr[com+1];
            arr[com+1]=temp;
        }
    }
}
for(itr=0;itr<size;itr+=1)
printf("%d ",arr[itr]);
return 0;
}
