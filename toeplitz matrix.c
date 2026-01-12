#include<stdio.h>
int main()
         {
             int row,col,i,j;
             scanf("%d%d",&row,&col);
             int arr1[row][col];
              for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)
                    scanf("%d",&arr1[i][j]);
             }
               for(i=0;i<=row-2;i+=1)
             {
                 for(j=0;j<=col-2;j+=1)
                {
                    if (arr1[i][j]!=arr1[i+1][j+1])
                        break;
                 }
                 if(j<=col-2)
                    break;
             }
             if(i<=row-2)
                printf("Not toeplitz");
             else
                printf("toeplitz");
                    return 0;
             }
