#include<stdio.h>

int main()
{
int option,c1,f2;
float f1,c2;
printf("For Celsius to Fahrenheit Enter 1\nFor Fahrenheit to Celsius enter 2:\n");
scanf("%d",option);
if(option==1)
{
printf("Enter value:\n");
scanf("%d",c1);
f1=c1*(9/5)+32;
printf("Result:%f\n",&f1);
}
else{
    printf("Enter value:\n");
    scanf("%d",f2);
    c2=(f2-32)/(9/5);
    printf("Result:%f\n",&c2);
    }
    return 0;
}