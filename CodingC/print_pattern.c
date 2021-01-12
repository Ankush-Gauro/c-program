#include<stdio.h>
void pattern(int x);
int main()
{
    int a;
    printf("Enter number of lines\n");
    scanf("%d",a);
    pattern(a);
    return 0;
}
void pattern(int x)
{
    if(x==1)
    {
        printf("*\n");
        return;
    }
    pattern(x-1);
    for(int i=0; i<(2*x-1); i++)
    {
        printf("*");
    }
    printf("\n");

    return;
}