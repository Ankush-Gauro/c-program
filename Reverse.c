#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char name[10];
int len,i;
printf("Enter name:");
scanf("%d",name);
len=strlen(name);
for (i=len-1;i>=0;i--)
{
printf("%c",name[i]);
}
getch();

    return 0;
}