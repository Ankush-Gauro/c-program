#include<stdio.h>

int main()
{
    int yard,i;
    scanf("%d",&yard);
    if(yard==1)
    {
        printf("shh");
    }
    else if(yard>10)
    {
        printf("High five");
    }
     else
    {
        for(i=0;i<yard;i++)
        {
            printf("Ra!");
        }
    }
    return 0;
}