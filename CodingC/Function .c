#include<stdio.h>
void Good_Morning(void);
void Good_Afternoon(void);
void Good_Night(void);
int main()
{
    Good_Morning();
    Good_Afternoon();
    Good_Night();
    return 0;
}
void Good_Morning(void)
{
    printf("Good Morning!\n");
}
void Good_Afternoon(void)
{
    printf("Good Afternoon!\n");
}
void Good_Night()
{
    printf("Good Night!\n");
}