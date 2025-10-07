#include <stdio.h>



int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

typedef struct {
    int y;
    int m;
    int d;
} Date;

Date DateOf(int y, int m, int d)
{
    Date date;
    date.y = y;
    date.m = m;
    date.d = d;

    return date;
}

Date After(Date x, int n)
{
    Date result = x;
    
    while (n > 0) {
        int days_in_month = mdays[isleap(result.y)][result.m - 1];
        int days_left_in_month = days_in_month - result.d;
        
        if (n <= days_left_in_month) {
            result.d += n;
            n = 0;
        } else {
            n -= (days_left_in_month + 1);
            result.d = 1;
            result.m++;
            
            if (result.m > 12) {
                result.m = 1;
                result.y++;
            }
        }
    }
    
    return result;
}

Date Before(Date x, int n)
{
    Date result = x;
    
    while (n > 0) {
        if (n < result.d) {
            result.d -= n;
            n = 0;
        } else {
            n -= result.d;
            result.m--;
            
            if (result.m < 1) {
                result.m = 12;
                result.y--;
            }
            
            result.d = mdays[isleap(result.y)][result.m - 1];
        }
    }
    
    return result;
}

int main()
{
    int y = 2012;
    int m = 5;
    int d = 10;
    int a = 100;
    int b = 200;

    Date date, date_after, date_before;

    date = DateOf(y, m, d);
    printf("date: %d년 %d월 %d일\n", date.y, date.m, date.d);

    date_after = After(date, a);
    printf("date_after: %d년 %d월 %d일\n", date_after.y, date_after.m, date_after.d);

    date_before = Before(date, b);
    printf("date_before: %d년 %d월 %d일\n", date_before.y, date_before.m, date_before.d);

    return 0;
}