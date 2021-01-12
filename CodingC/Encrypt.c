#include<stdio.h>
void encrypt(char *c);
int main()
{
    char c[]="Ankush";
    encrypt(c);
    printf("Encrypted string:%s",c);
    return 0;
}
void encrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr+1;
        ptr++;
    }
}