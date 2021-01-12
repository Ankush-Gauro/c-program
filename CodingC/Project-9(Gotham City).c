#include<stdio.h>

int main()
{
    int criminals;
    scanf("%d",&criminals);
    if(criminals<5)
    {
        printf("I got this!");
    }
    else if(criminals >=5 && criminals <=10)
    {
        printf("Help me Batman");
    }
    else
    {
        printf("Good luck out there!");
    }
    return 0;
}