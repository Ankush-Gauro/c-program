#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
struct stu_mark
{
char sub[10];
int m;
}mark;
};
main();
{
struct student stu;
printf("Enter roll:");
scanf("%d",&stu.roll);
printf("\nEntername:");
scanf("%s",stu.name);
printf("\nEnter sub code:");
scanf("%s",stu.mark.sub);
printf("\nEnter mark:");
scanf("%d",stu.mark.m);
printf("*****\n\tDetails*****\n\t");
printf("\nRoll:%d",stu.roll);
printf("\nName:%s",stu.name);
printf("\nSub code:%s",stu.mark.sub);
printf("\nMark:%d",stu.mark.m);
getch();
}