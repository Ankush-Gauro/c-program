#include<stdio.h>
#include<string.h>
void reverse(int *arr, int n)
{
    int temp;
    for(int i=0; i<(n/2); i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int arr[]= {1,2,3,4,5};
    int n=(sizeof(arr)/4);
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("Value of %d is %d\n",i,arr[i]);
    }


    return 0;
}