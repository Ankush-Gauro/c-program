#include<stdio.h>
int fibonacci(int a)
{
    int i,j,f=0,s=1;
    for(i=0; i<a; i++)
    {
        if(i<=1)
        {
            j=i;
        }
        else
        {
            j=f+s;
            f=s;
            s=j;
        }
        printf("%d",j);
    }

}
int main()
{
    int n;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}