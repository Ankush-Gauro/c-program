#include<stdio.h>

int main()
{
int arr[3][10],i,a,b,c;
printf("Table of number:\n");
scanf("%d",&a);
printf("Table of number:\n");
scanf("%d",&b);
printf("Table of number:\n");
scanf("%d",&c);
printf("\n\t*****Table of %d*****\t\n",a);
for(i=0;i<10;i++)
{
arr[0][i]=(i+1)*a;
printf("%d X %d=%d\n",a,(i+1),arr[0][i]);
}
printf("\n\t*****Table of %d*****\t\n",b);
for(i=0;i<10;i++)
{
arr[1][i]=(i+1)*b;
printf("%d X %d=%d\n",b,(i+1),arr[1][i]);
}
printf("\n\t*****Table of %d*****\t\n",c);
for(i=0;i<10;i++)
{
arr[2][i]=(i+1)*c;
printf("%d X %d=%d\n",c,(i+1),arr[0][i]);
}
    return 0;
}