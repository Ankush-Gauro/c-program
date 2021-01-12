#include<stdio.h>
#include<conio.h>
union student
{
int roll;
char name[10];
};
int main()
{
union student stu;
printf("Enter Roll:");
scanf("%d",&stu.roll);
printf("\nEnter name:");
scanf("%s",stu.name);
printf("\n\t*****Details Entered*****\n\t");
printf("\nRoll:%d",&stu.roll);
printf("\nName:%s",stu.name);
getch();
return 0;
}