#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    int l=strlen(str);
    int k=l;
    for(int j; j<=k; j++,l--)
    {
        printf("%c",str[l]);
    }
    return 0;
}