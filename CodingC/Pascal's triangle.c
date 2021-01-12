#include<stdio.h>

int main()
{
    int row,col,space,n,no;
    printf("Enter the number of rows:\n");
    scanf("%d",&no);
    for(row=0; row<no; row++)
    {
        for(space=0; space<(no-row); space++)
        {
            printf(".");
        }
        n=1;
        for(col=0; col<=row; col++)
        {
            printf(" %d",n);
            n=n*(row-col)/(col+1);
        }
        printf("\n");
    }
    return 0;
}