#include<stdio.h>
struct bank
{
    int acc;
    float balance;
    char name[20];
    int year;
    int month;
    int date;
};
int main()
{
    struct bank b1;
    printf("Enter bank account number:\n");
    scanf("%d",&b1.acc);
    printf("Enter account balance:\n");
    scanf("%f",&b1.balance);
    printf("Enter account holder's name:\n");
    scanf("%s",b1.name);
    printf("Enter date in yy/mm/dd:\n");
    scanf("%d %d %d",&b1.year,&b1.month,&b1.date);
    printf("\n\t*****Account Details*****\t\n");
    printf("Account number:%d\n",b1.acc);
    printf("Balance:%f\n",b1.balance);
    printf("Name:%s\n",b1.name);
    printf("Date: %d/%d/%d\n",b1.year,b1.month,b1.date);

    return 0;
}