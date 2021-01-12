#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len,i;
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i])==' ')
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}