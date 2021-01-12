#include<stdio.h>

int main()
{
    int dollars,pesos,dollar;
    scanf("%d",&pesos);
    scanf("%d",&dollars);
    dollar=pesos*0.02;
    if(dollar<=dollars)
    {
        printf("Pesos");
    }
    else
    {
        printf("Dollars");
    }
    return 0;
}