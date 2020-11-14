#include<stdio.h>

int main()
{
    int a=100;
    void *p;
    p=&a;
    printf("a is:%d\n",*(int*)p);
    return 0;
}