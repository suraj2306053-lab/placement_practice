#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col],i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);    }
    int outer=0,left=0,right=0;
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
          if(i==0|| i==row-1||j==0||j==col-1)
                outer+=arr[i][j];
          if(i==j)
            left+=arr[i][j];
          if(i+j== row-1)
            right+=arr[i][j];}
     }
     printf("outer sum is %d\n",outer);
     printf("right sum is %d\n",right);
     printf("left sum is %d\n",left);
return 0;
}
