#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    char res[200]; //extra space
    int itr,res_itr;
    for(itr=0;itr<str;itr+=1)
        if(str[itr]>='A' && str[itr]<='Z')
    {
        if(itr!=0)
      res[res_itr] = ' ';
      res[res_itr] = (char)(str[itr] + 32);
    }
    else
    {
        res[res_itr] = str[itr];
    }
    res[res_itr]='\0';

    printf("%s",res[res_itr]);
    return 0;
}
