#include<stdio.h>

int main()
{
int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    printf("%d X %d = %d\n",n,i,i*n);
    }
    return 0;
}