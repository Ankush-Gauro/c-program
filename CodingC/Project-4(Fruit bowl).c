#include<stdio.h>

int main()
{
    int fruit,apple,leftover,pie,even;
    scanf("%d",&fruit);
    apple=fruit/2;
    leftover=apple%3;
    if(leftover==0)
    {
        pie=apple/3;
        printf("%d\n",pie);
    }
    else
    {
        even=apple-leftover;
        pie=even/3;
        printf("%d\n",pie);
    }
    return 0;
}