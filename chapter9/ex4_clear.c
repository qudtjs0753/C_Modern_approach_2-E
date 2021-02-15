#include <stdio.h>
#include <ctype.h>
//이전버전 너무 코드 더러움. 새로 고침.

int day_of_year(int month, int day, int year);
void print_day(int n);

int main(void)
{

    printf("%d", day_of_year(2, 21, 2021));
    return 0;
}
//for문으로 계속 상태 확인하는 것보다 미리 제한해놓고 차후에 더해주는 방법이 더 깔끔함.
int day_of_year(int month, int day, int year)
{
    int past_year = year - 1;
    int past_time = 0;
    int day_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30};
    int this_year = 0;
    for (int i = 0; i < month - 1; i++)
    {
        this_year += day_arr[i];
    }
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        this_year += 1;
    }
    past_time = 365 * past_year + past_year / 4 - past_year / 100 + past_year / 400;
    this_year += day;

    if ((past_time+this_year) % 7 == 0)
    {
        printf("sunday");
    }
    if ((past_time+this_year) % 7 == 1)
    {
        printf("monday");
    }
    if ((past_time+this_year) % 7 == 2)
    {
        printf("tuesday");
    }
    if ((past_time+this_year) % 7 == 3)
    {
        printf("wednesday");
    }
    if ((past_time+this_year) % 7 == 4)
    {
        printf("thursday");
    }
    if ((past_time+this_year) % 7 == 5)
    {
        printf("friday");
    }
    if ((past_time+this_year) % 7 == 6)
    {
        printf("saturday");
    }
    return this_year;
}