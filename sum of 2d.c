#include<stdio.h>
int main()
         {
             int row,col,i,j;
             scanf("%d%d",&row,&col);
             int arr1[row][col],arr2[row][col],res[row][col];
             for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)
                    scanf("%d",&arr1[i][j]);
             }
             for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)
                    scanf("%d",&arr2[i][j]);
             }
             for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)
              res[i][j] = arr1[i][j]+arr2[i][j];
             }
             for(i=0;i<row;printf("\n"),i+=1)
             {
                 for(j=0;j<col;j+=1)
             printf("%d ",res[i][j]);
             }
             return 0;
         }
