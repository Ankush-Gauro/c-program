#include<stdio.h>

int main()
{
    int i,n,prime=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0)
    {
        printf("Not a Prime Number\n");
    }
    else
    {
        printf("Prime Number\n");
    }

    return 0;
}