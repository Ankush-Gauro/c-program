#include<stdio.h>
void Force(int a);
int main()
{
int a;
    printf("Enter mass:\n");
    scanf("%d",&a);
    Force(a);
    return 0;
}
void Force(int a)
{
int b;
b=a*9.8;
printf("Force:%dN",b);
}