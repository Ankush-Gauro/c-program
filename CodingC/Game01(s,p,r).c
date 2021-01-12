#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp=='r')
    {
        return -1;
    }
    else if(you=='r' && comp=='s')
    {
        return 1;
    }
    if(you=='s' && comp=='p')
    {
        return 1;
    }
    else if(you=='p' && comp=='s')
    {
        return -1;
    }
    if(you=='r' && comp=='p')
    {
        return -1;
    }
    else if(you=='p' && comp=='r')
    {
        return 1;
    }
    }

int main()
{
char you,comp;
srand(time(0));
int num=rand()%100+1;
if(num<33)
{
    comp=='s';
}
else if(num>33 && num<66)
{
    comp=='p';
}
else
{
    comp=='r';
}
    printf("Enter 's' for Scissor:\nEnter 'p' for Paper:\nEnter 'r' for Rock:\n");
    scanf("%c",&you);
    int result=game(you,comp);
    printf("You choose %c\n Computer choose %c .\n",you,comp);
    if(result==0)
    {
        printf("Game draw!\n");
    }
    else if(result==1)
    {
        printf("You won!\n");
    }
    else
    {
        printf("You loose!\n");
    }
    return 0;
}