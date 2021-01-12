#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
clrscr();
char one[10],two[10];
int cmp,o;
start:
    printf("Enter a string:");
    scanf("%s",one);
    strcpy(two,one);
    strev(one);
    printf("\nReverse is:%s",one);
    cmp=strcmp(one,two);
    if (cmp==0)
    {
    printf("\nPalindrome");
    }
    else
    {
    printf("\nNot Palindrome");
    }
    printf("\nEnter 1 to continue:\nEnter 2 to exit");
    scanf("%d",o);
    if (o==1)
    {
    goto start;
    }
    getch();
    return 0;
}