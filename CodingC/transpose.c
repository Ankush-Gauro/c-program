#include<stdio.h>

int main()
{
    int mat[3][3],trans[3][3],i,j;
    printf("Enter values in first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",mat[i][j]);
        }
    }
    printf("Values Entered:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            trans[i][j]=mat[j][i];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}