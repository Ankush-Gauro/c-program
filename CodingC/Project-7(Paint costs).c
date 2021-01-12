#include<stdio.h>

int main()
{
    float brushes,cost;
    scanf("%f",&brushes);
    cost=40.00+(5*brushes);
    printf("%.f",(cost*0.1)+cost); 
    return 0;
}