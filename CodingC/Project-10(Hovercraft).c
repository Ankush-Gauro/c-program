#include<stdio.h>

int main()
{
    int sales,cost,sp;
    scanf("%d",&sales);
    cost=21000000;
    sp=sales*3000000;
    if(cost>sp)
    {
        printf("Loss");
    }
    else if(cost==sp)
    {
        printf("Broke even");
    }
    else
    {
        printf("Profit");
    }
    return 0;
}