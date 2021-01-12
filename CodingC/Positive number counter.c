#include<stdio.h>
void count(int *arr,int a)
{
    int n=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]>0)
        {
            n++;
        }
    }
    printf("%d",n);
    
}
int main()
{
int arr[]={1,2,3,4,5,6,7,-8,-9,8,0};
int a=(sizeof(arr))/4;
count(arr,a);


    
    return 0;
}