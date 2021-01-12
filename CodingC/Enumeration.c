#include<stdio.h>
enum days {sun=1,mon,tue,wed,thu,fri,sat};
int main()
{
    int a;
    enum days d;
    printf("Enter day:");
    scanf("%d",&a);
    d=a;
    if(d==sat)
    {
        printf("Weekend");
    }
    else
    {
        printf("Working day");
    }
    return 0;
}