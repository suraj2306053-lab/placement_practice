#include<stdio.h>
int main()
         {
             int row,col,i,j;
             scanf("%d%d",&row,&col);
             int arr1[row][col],arr2[row][col];
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
                   if(arr1[i][j]!=arr2[i][j])
                    break;
                    if(j<col)
                        break;
                    }
                    if (i<row)
                    printf("not equal\n");
                    else
                        printf("equal");
             return 0;
         }
