#include<stdio.h>
#include<string.h>
int main()
{
    char in[256],*out,f;
    fgets(in,256,stdin);
    out=strtok(in," ");
    while(out)
    {
        f=*out++;
        printf("%s%cay",out,f);
        out=strtok(NULL," ");
    }
    return 0;
}