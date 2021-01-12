#include<stdio.h>
int recursive(int x)
{
    int sum=0;
    if(x>=0)
    {
        sum += x+ recursive(x-1);
        return sum;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    printf("Enter a number:\n");
    scanf("%d",&a);
    b=recursive(a);

    printf("Sum of first %d natural numbers is %d",a,b);
    return 0;
}