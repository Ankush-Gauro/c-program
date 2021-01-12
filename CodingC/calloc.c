#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,*ptr,*p,i,sum=0;
printf("No. of elements to be entered:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
p=ptr;
if(ptr==NULL)
{
printf("\nOut of memory");
exit(0);
}
printf("\nEnter %d elements",n);
for(i=1;i<=n;i++)
{
scanf("%d",ptr);
sum=sum+*ptr;
ptr++;
}
printf("\n\t*****Elements are*****\n\t");
for(i=1;i<=n;i++)
{
printf("\n%d",*p);
p++;
}
printf("\nAddition is:%d",sum);

return 0;
}