#include<stdio.h>
typedef struct date
{
    int year;
    int month;
    int date;
}date;
void display(date d)
{
    printf("Date is: %d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(date d1,date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }
    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }
    if(d1.date>d2.date)
    {
        return 1;
    }
    if(d1.date<d2.date)
    {
        return -1;
    }
    return 0;
    
}
int main()
{
date d1={10, 9, 2004};
date d2={10, 4, 2004};
display(d1);
display(d2);
int a=datecmp(d1, d2);
if(a==1)
{
    printf("Second date is greater\n");
}
else if(a==-1)
{
    printf("First date is greater\n");
}
else
{
    printf("Same date\n");
}
    return 0;
}