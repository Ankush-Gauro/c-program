#include<stdio.h>
#include<conio.h>
void add (int,int);
main()
{int a,b;
clrscr();
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("enter 2nd no:");
    scanf("%d",&b);
    add (a,b);
    getch();
    return 0;
}
void add (int x,int y)
{
int c;
c=x+y;
printf("Reasult:%d",c);
}