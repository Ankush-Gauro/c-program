#include<stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number:\n");
    scanf("%d",&b);
    printf("Enter 3rd number:\n");
    scanf("%d",&c);
    avg=((float)(a+b+c)/3);
    printf("Average is:%f\n",avg);
    return 0;
}