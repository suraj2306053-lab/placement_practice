#include<stdio.h>
int main()
         {
             int size;
             scanf("%d",&size);
             int arr[size],itr,sum=0;
             for(itr=0;itr<size;itr+=1)
             {
                 scanf("%d",&arr[itr]);
             }
             for(itr=0;itr<size;itr+=1)
             {
                 arr[itr]=sum+arr[itr];
                 sum=arr[itr];
             }
             for(itr=0;itr<size;itr+=1)
             printf("%d ",arr[itr]);
             return 0;
         }
