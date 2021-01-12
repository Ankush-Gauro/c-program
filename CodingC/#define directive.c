#include<stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)

int main()
{
float radius=2;
    printf("%3.2f\n",PI);
    printf("Area is %5.2f\n",AREA(radius));
    printf("Area with radius +1:%5.2f\n",AREA(radius+1));
    return 0;
}