#include<stdio.h>
int main()
{

char str[100];
scanf("%s",str);
int itr,count1=0,count2=0,count3=0,symbols=0;
for(itr=0;str[itr]!='\0';itr+=1)
{
    if(str[itr]>='A' && str[itr]<='Z')
        count1++;
    else if(str[itr]>='a' && str[itr]<='z')
        count2++;
    else if(str[itr]>='0' && str[itr]<='9')
        count3++;
    else
        symbols++;
}
printf("Upper case count is %d\n",count1);
printf("lower case count is %d\n",count2);
printf("Number count is %d\n",count3);
printf("Symbols count is %d",symbols);
return 0;
}
