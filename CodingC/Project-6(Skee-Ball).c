#include<stdio.h>

int main()
{
    int points,tickets,cost;
    scanf("%d",&points);
    scanf("%d",&cost);
    tickets=points/12;
    if(tickets<cost)
    {
        printf("Try again");
    }
    else
    {
        printf("Buy it!");
    }
     
    return 0;
}