#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    float salary;
    int code;
};
int main()
{
struct employee e1,e2,e3;
strcpy(e1.name,"Ankush");
e1.code=01;
e1.salary=1000000;
strcpy(e2.name,"Harry");
e2.code=47;
e2.salary=100000;
strcpy(e3.name,"Aj");
e3.code=99;
e3.salary=10000;
printf("\t\n*****Details of employee 1*****\t\n");
printf("Name:%s\n",e1.name);
printf("Code:%d\n",e1.code);
printf("Salary:%f\n",e1.salary);
printf("\t\n*****Details of employee 2*****\t\n");
printf("Name:%s\n",e2.name);
printf("Code:%d\n",e2.code);
printf("Salary:%f\n",e2.salary);
printf("\t\n*****Details of employee 3*****\t\n");
printf("Name:%s\n",e3.name);
printf("Code:%d\n",e3.code);
printf("Salary:%f\n",e3.salary);
    return 0;
}