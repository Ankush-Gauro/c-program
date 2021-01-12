#include<stdio.h>
int occurrence(char st[],char c);
int main()
{
    char st[]="Hello world!";
    int count=occurrence(st,'l');
    printf("Occurrence:%d",count);
    return 0;
}
int occurrence(char st[],char c)
{
    char *ptr=st;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr=='c')
        {
            count++;
        }
        ptr++;
    }
    return count;
}