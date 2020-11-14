#include<stdio.h>

int main()
{
int a,b,c,d;
printf("Enter 1st number:\n");
scanf("%d",&a);
printf("Enter 2nd number:\n");
scanf("%d",&b);
printf("Enter 3rd number:\n");
scanf("%d",&c);
printf("Enter 4th number:\n");
scanf("%d",&d);
if(a>b && a>c && a>d)
printf("%d is greater\n",a);
if(b>a && b>c && b>d)
printf("%d ia greatest\n",b);
if(c>a && c>b && c>d)
printf("%d is greatest\n",c);
else
printf("%d is greatest\n",d);
    return 0;
}