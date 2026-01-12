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
int start=0,end=size-1,mid;
int key;
scanf("%d",&key);
while(start<=end)
{
    mid=(start+end)/2;
    if(arr[mid]==key)
        break;
    else
        if(arr[mid<key])
        start=mid+1;
        else
            end=mid-1;
}
if(arr[mid]==key)
    printf("Element is found at positiom",itr+1);
    else
        printf("Element not found");
return 0;
}
