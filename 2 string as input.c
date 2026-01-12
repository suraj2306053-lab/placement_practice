#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    scanf("%s",&str);
    char key_char;
    scanf("%c",key_char);
    int itr;
     for(itr=0;str[itr]!='\0';itr++)
     {
         if(str[itr]==key_char)
            break;
     }
     if(str[itr]==key_char)
        printf("Found");
     else
        printf("Not found");
}
