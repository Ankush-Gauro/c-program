#include<stdio.h>

int main()
{
    int i=1,n,s=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s*n;
        n--;
    }
    printf("Facrorial:%d",s);
    return 0;
}