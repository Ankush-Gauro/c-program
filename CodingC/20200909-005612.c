#include<stdio.h>
#include<conio.h>
main()
{
   int arr1[5], arr2[5], arr3[5], i;
printf("Enter 5 values:");
for(i=0;i<5;i++)
{
scanf("%d",& arr1[i]);
}
printf("enter five values in second array");
for(i=0;i<5;i++)
{
scanf("%d",& arr2[i]);
}
for(i=0;i<5;i++)
{
arr3[i]=arr1[i]+arr2[i];
}
printf("Addition of two array");
for(i=0;i<5;i++)
{
printf("%d",arr3[i]);
}
getch();
}