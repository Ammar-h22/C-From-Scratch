#include <stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int second;

} time;
void display(time t)
{
    printf("The time is : %d:%d:%d\n", t.hour, t.minute, t.second);
}
int timeCmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.minute > t2.minute)
    {
        return 1;
    }
    if (t1.minute < t2.minute)
    {
        return -1;
    }
    if (t1.second > t2.second)
    {
        return 1;
    }
    if (t1.second < t2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    time t1 = {7, 30, 13};
    time t2 = {7, 30, 35};
    display(t1);
    display(t2);
    int a = timeCmp(t1, t2);
    printf("Time Comparison test returns : %d", a);
    return 0;
}
