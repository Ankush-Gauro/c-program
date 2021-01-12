#include<stdio.h>

int main()
{
    int a,i,n=1;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(i=a; i>=1; i--)
    {
        n=n*i;
    }
    printf("Factorial:%d",n);
    return 0;
}