#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void main()
{
    int s_ind,e_ind,itr;
    char str[100];
    scanf("%[^\n]",&str);
    char temp;
    while(true)
    {
        s_ind = itr;
        e_ind = s_ind;
        for(itr=s_ind;str[itr]!=' ' && str[itr]!='\0';itr+=1);
        e_ind = itr-1;

        while(s_ind < e_ind){
            temp = str[s_ind];
            str[s_ind] = str[e_ind];
            str[e_ind] = temp;

            s_ind+=1;
            e_ind-=1;
        }
        if(str[itr]=='\0')
            break;
        itr = itr+1;

    }
    printf("%s",str);
}
