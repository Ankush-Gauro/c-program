#include<stdio.h>

int main()
{   int a,i;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>=100) {
        printf("Above 100\n");
    }
    else {
        for(i=1; i<=a; i++)
            printf("%d\n",i);
    }
    return 0;
}