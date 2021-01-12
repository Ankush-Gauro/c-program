#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter values in first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("Enter values in second matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",b[i][j]);
        }
    }
    printf("Values of first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Values in second matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n\t*****Addition of two matrix*****\n\t");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}