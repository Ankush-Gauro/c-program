#include<stdio.h>
#include<math.h>//for pow() function
int main()
{
    int no,copy,re,n=0,ans=0;
    printf("Enter a number:\n");
    scanf("%d",&no);
    copy=no;
    while(copy!=0)
    {
        copy=copy/10;
        n++;
    }
    copy=no;
    while(copy!=no)
    {
        re=copy%10;
        ans=ans+pow(re,n);
        copy=copy/10;
    }
    if(ans==no)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
   
    return 0;
}