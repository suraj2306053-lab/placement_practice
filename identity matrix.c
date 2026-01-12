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
               for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)
                {
                    if (i==j)
                     if(arr1[i][j]!=1)
                        break;
                 else{
                    if(arr1[i][j]!=0)
                    break;
                 }
             }
                 if(j<col)
                    break;}
                 if(i<row)
                    printf("Not identity");
                    else
                 printf("Identity matrix");
                    return 0;
             }
