#include<stdio.h>
#include<string.h>
struct sound
{
    char n[50];
}input[50];
int main()
{
    int i=0;
    do
    {
        scanf("%s",input[i].n);
        if(!(strcmp(input[i].n,"Grr")))
        {
            printf("Lion");
        }
        if(!(strcmp(input[i].n,"Rawr")))
        {
            printf("Tiger");
        }
        if(!(strcmp(input[i].n,"Ssss")))
        {
            printf("Snake");
        }
        if(!(strcmp(input[i].n,"Chirp")))
        {
            printf("Bird");
        }
        i++;
    }while(i<50);
    return 0;
}