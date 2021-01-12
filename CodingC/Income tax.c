#include<stdio.h>

int main()
{
int income,tax=0;
    printf("Enter your income:\n");
    scanf("%d",&income);
    if(income>=250000 && income<=500000)
    {
    tax=tax+ 0.05*(income - 250000);
    }
    if(income>=500000 && income<=1000000)
    {
    tax=tax+ 0.20*(income - 500000);
    }
    if(income>=1000000)
    {
    tax=tax+ 0.30*(income - 1000000);
    }
   
    printf("Tax:%d\n",tax);
    
    return 0;
}