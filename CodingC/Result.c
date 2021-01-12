#include<stdio.h>

int main()
{
int math,science,computer,total=0;
printf("Enter marks in math:\n");
scanf("%d",&math);
printf("Enter marks in science:\n");
scanf("%d",&science);
printf("Enter marks in computer:\n");
scanf("%d",&computer);
total=(math+science+computer)/3;
if(total>40 && math>33 && science>33 && computer>33)
{
printf("Congratulations! you are passed");
printf("Your percentage are:%d\n",total);
}
else
{
printf("You are failed");
printf("Your percentage are:%d\n",total);
}
return 0;
}