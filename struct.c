#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
}stu1={101,"Ankush"};
main()
{
struct student stu2;
printf("Roll no: %d",stu1.roll);
printf("\nStudent name: %s",stu1.name);
printf("\nEnter roll no.: ");
scanf("%d",&stu2.roll);
printf("\nEnter name:");
scanf("%s",stu2.name);
printf("\nRoll no:%d",stu2.roll);
printf("Name:%s",stu2.name);
getch();
}