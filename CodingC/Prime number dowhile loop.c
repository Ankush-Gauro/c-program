#include<stdio.h>

int main()
{
    int i=2,a,prime=1;
    printf("Enter a number:\n");
    scanf("%d",&a);
    do
    {
        if(a%i==0)
        {
            prime=0;
            break;
        }
        i++;
    } while(i<a);
    if(prime==0 && a!=2)
    {
        printf("Not a Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
    return 0;
}