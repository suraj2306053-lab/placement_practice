#include<stdio.h>
int main()
         {
             int row,col;
             scanf("%d %d",&row,&col);
             int arr[row][col];
             int i,j,sum=0;
             for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)

                    scanf("%d",&arr[i][j]);
                 }
             for(i=0;i<row;i+=1)
             {
             for(j=0;j<col;j+=1)
                sum+=arr[i][j];
}
printf("the sum is %d",sum);
 return 0;
}
