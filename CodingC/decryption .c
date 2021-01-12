#include<stdio.h>

void decrypt(char *c);
int main()
{
    char c[]="Bolvti";
    
    decrypt(c);
    printf("Decrypted string:%s\n",c);
    return 0;
}

void decrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
}
