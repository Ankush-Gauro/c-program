#include<stdio.h>

int main()
{
    int houses,c;
    scanf("%d",&houses);
    c=200/houses;
    if((200%houses)==0)
    {
        printf("%d\n",c);
    }
    else
    {
        printf("%d\n",c+1);
    }
    return 0;
}