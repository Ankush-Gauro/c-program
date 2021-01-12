#include<stdio.h>
#include<conio.h>
main()
{
   int sub[2][3],i,j,total=0;
printf("enter 6 num:");
for(i=0;i<2;i++)
{

for(j=0;j<3;j++)
{
scanf("%d",&sub[i][j]);
}
}
printf("values are:");
for (i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n\t%d",sub[i][j]);
total=total+sub[i][j];
}
printf("\n\t%d",total);
total=0;
printf("\n");
}
getch();
}