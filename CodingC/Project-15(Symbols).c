#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len,i;
    len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i])==' ' || str[i]>='0' && str[i]<='9')
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}