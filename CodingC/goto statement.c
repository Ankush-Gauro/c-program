#include<stdio.h>
#include<conio.h>
main()
{int a;
char b;
start |


printf("enter a number:");
scanf("%d",&a);
if(a%2==0)
{
printf("even");
}
else 
{
printf("odd");
}
printf("exit?");
scanf("%c",&b);
if(b=='No')
{
goto start;
}
getch();
}