#include<stdio.h>
int main()
         {
             int row,col;
             scanf("%d %d",&row,&col);
             int arr[row][col];
             int i,j;
             for(i=0;i<row;i+=1)
             {
                 for(j=0;j<col;j+=1)

                    scanf("%d",&arr[i][j]);
                 }
                 int max=arr[i][0];
             for(i=0;i<row;i+=1)
             {
             for(j=0;j<col;j+=1)
                if (max<arr[i][j])
                {
                  max=arr[i][j];
                }
                printf(" the maximum in row is %d\n",max);
}
 return 0;
}
