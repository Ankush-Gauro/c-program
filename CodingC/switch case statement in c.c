#include<stdio.h>
#include<conio.h>
 main()
{
clrscr();
char a;
    printf("Enter a character:");
    scanf("%c",&a);
    switch (a)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("%c is a vowel alphabet",a);
    break;
    default:
    printf("%c is a conatant alphabet",a);
    break;
   }
    getch();
    
    return 0;
}