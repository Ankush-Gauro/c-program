#include<stdio.h>
int main()
{
    int len,i,arr[100],sum=0;
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<len;i++)
    {
        if((arr[i]%2)==0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}