#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int no,i,fact=1;
    printf("Enter a num:");
    scanf("%d",&no);
    for (i=no;i>=1;i--)
    {
    fact=fact*i;
    }
    printf("\nfactorial is:%d",fact);
    getch();
    
}