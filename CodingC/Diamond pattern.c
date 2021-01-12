#include<stdio.h>

int main()
{
    int i,j,k,s,n;
    char sy;
    printf("Enter the symbol for the pattern:\n");
    scanf("%c",&sy);
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        n++;
        printf("Rows increasing by 1 for the pattern");
    }
    s=(n/2)+1;
    for(i=1; i<=(n/2)+1; i++)
    {
        for(j=1; j<=s; j++)
        {
            printf(" ");
        }
        s--;
        for(k=1; k<=(2*i)-1; k++)
        {
            printf("%c",sy);
        }
        printf("\n");
    }
    s=2;
    for(i=(n/2); i>=1; i--)
    {
        {   for(j=1; j<=s; j++)
                printf(" ");
        }
        s++;
        for(k=1; k<=(2*i)-1; k++)
        {
            printf("%c",sy);
        }
        printf("\n");
    }
    return 0;
}