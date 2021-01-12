#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    gets(str);
    int len,i,j,flag=0;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)   
    {
        printf("Deja Vu");
    }
    else
    {
        printf("Unique");
    }
    return 0;
}