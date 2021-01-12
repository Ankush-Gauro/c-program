#include<stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int second;
}time;
void display(time t)
{
    printf("Time is: %d:%d:%d\n",t.hour,t.minute,t.second);
}
int timecmp(time t1,time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }
    if(t1.minute>t2.minute)
    {
        return 1;
    }
    if(t1.minute<t2.minute)
    {
        return -1;
    }
    if(t1.second>t2.second)
    {
        return 1;
    }
    if(t1.second<t2.second)
    {
        return -1;
    }
    return 0;
    
}
int main()
{
time t1={9, 12, 26};
time t2={12, 6, 12};
display(t1);
display(t2);
int a=timecmp(t1, t2);
if(a==1)
{
    printf("First time is greater\n");
}
else if(a==-1)
{
    printf("Second time is greater\n");
}
else
{
    printf("Same time\n");
}
    return 0;
}