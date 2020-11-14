#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,*ptr,i,*p;
int sum=0;
printf("Enter size of array:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
p=ptr;
printf("\nenter elements in array:");
for(i=1;i<=n;i++)
{
scanf("%d",ptr);
sum=sum+ptr;
ptr++;
}
printf("\nArray elements:");
for(i=1;i<=n;i++)
{
printf("\n%d",*p);
p++;
}
printf("\nAddition:%d",sum);
getch();
}