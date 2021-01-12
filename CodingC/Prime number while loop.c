#include<stdio.h>

int main()
{
    int i=2,a,prime=1;
    printf("Enter a number:\n");
    scanf("%d",&a);
    while(i<a)
    {
        if(a%i==0)
        {
            prime=0;
            break;
        }
        i++;
    }
    if(prime==0)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("Prime number");
    }
    return 0;
}