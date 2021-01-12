#include<stdio.h>

int main()
{
    int siblings,popsicles;
    scanf("%d",&siblings);
    scanf("%d",&popsicles);
    if((popsicles % siblings)==0)
    {
        printf("Give away\n");
    }
    else
    {
        printf("Eat them yourself\n");
    }
    return 0;
}