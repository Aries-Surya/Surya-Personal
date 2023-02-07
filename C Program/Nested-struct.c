#include<stdio.h>
struct time
{
    int hr;
    int min;
};
struct date
{
    int day;
    int month;
    int year;
    struct time time;
};
void main()
{
    struct date date;
    printf("Enter the Hr & Min:");
    scanf("%d %d",&date.time.hr,&date.time.min);
    printf("Enter the day month year:");
    scanf("%d %d %d",&date.day,&date.month,&date.year);

    printf("now the time is: %d %d %d %d %d",date.time.hr, date.time.min, date.day, date.month, date.year);
}

