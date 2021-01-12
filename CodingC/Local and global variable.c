#include<stdio.h>
int a;//Global variable
void add(void);
int main()
{
    printf("Enter value for global variable:\n");
    scanf("%d",&a);
    add();
    return 0;
}
void add(void)
{
int b;//local variable
printf("Enter value for local variable:\n");
scanf("%d",&b);
printf("Addition is: %d",(a+b));
}