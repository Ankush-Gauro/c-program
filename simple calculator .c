#include<stdio.h>
#include<conio.h>
int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int divide(int num1,int num2);

int main()
{
int x,y,choice,result;
int (*op[4])(int,int);

op[0]=add;
op[1]=subtract;
op[2]=multiply;
op[3]=divide;
printf("Enter two integers:\n");
scanf("%d %d",&x,&y);
printf("Enter 0 to add\n 1 to subtract\n 2 to multiply \n 3 to divide:");
scanf("%d",choice);
result=op[choice](x,y);
printf("Result is:%d",result);
return 0;
getch();
   
}
int add(int x,int y)
{
return (x+y);
}
int subtract(int x,int y)
{
return (x-y);
}
int multiply(int x,int y)
{
return (x*y);
}
int divide(int x,int y)
{
if (y!=0)
return (x/y);
else
return (0);
}