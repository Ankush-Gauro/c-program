#include<stdio.h>
#include<conio.h>
main()
{
  int arr1[5]={2,1,7,5,3};
int arr2[5]={15,11,12,16,10};
int arr3[10];
int i,j,temp,k=0;
for(i=0;i<10;i++)
{
if(i>4)
{
arr3[i]=arr2[k];
k++;
}
arr3[i]=arr1[i];
}
printf("elements are:");
for(i=0;i<10;i++)
{
printf("%d",arr3[i]);
}
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(arr3[j]<arr3[i])
{
temp=arr3[i];
arr3[i]=arr3[j];
arr3[j]=temp;
}
}
}
printf("sorted elements are:");
for(i=0;i<10;i++)
{
printf("%d",arr3[i]);
}
getch();
    return 0;
}