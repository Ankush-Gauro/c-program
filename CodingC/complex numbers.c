#include<stdio.h>
typedef struct complex
{
    int real;
    int img;
}comp;
void display (comp c)
{
    printf("Real part:%d\n",c.real);
    printf("Imaginary part:%d\n",c.img);
}
int main()
{
comp cnum[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter value for real:\n");
        scanf("%d",&cnum[i].real);
        
        printf("Enter value for imaginary:\n");
        scanf("%d",&cnum[i].img);
    }
    for(int i=0;i<5;i++)
    {
        display(cnum[i]);
    }
    return 0;
}