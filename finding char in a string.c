#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    scanf("%s",&str);
    int itr = 0,count=0;
    for(itr=0;str[itr]!='\0';itr++)
    {
        if(str[itr] =='A' || str[itr] =='E' || str[itr] =='I' || str[itr] =='O' || str[itr] =='U' || str[itr] =='a' || str[itr] =='e' || str[itr] =='i' || str[itr] =='o' || str[itr] =='u' )
            count++;
    }
    printf("The Vowels is %d",count);
    }

