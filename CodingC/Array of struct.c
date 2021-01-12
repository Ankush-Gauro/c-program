#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
int roll;
char name[10];
};
main()
{
struct student stu[5];
int i;
printf("Enter 5 stu details:");
for(i=0;i<5;i++)
{
printf("\nEnter Roll for %d",i+1);
scanf("%d",&stu[i].roll);
printf("\nEnter name for %d",i+1);
scanf("%s",stu[i].name);
}
printf("\n\t*****Details*****\n\t");
for(i=0;i<5;i++)
{
printf("\nFor %d",i+1);
printf("\nRoll:%d",stu[i].roll);
printf("\nName:%s",stu[i].name);
}
getch();
}

