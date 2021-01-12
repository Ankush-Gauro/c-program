#include<stdio.h>
#include<conio.h>
void add (void);
main()
{clrscr();
    add ();
    getch();
}
void add (void)
{
int a,b,c;
printf("Enter 1st value:");
scanf("%d",&a);
printf("Enter 2nd value:");
scanf("%d",&b);
c=a+b;
printf("Reasult is %d",c);
}