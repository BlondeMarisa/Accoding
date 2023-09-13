#include <math.h>
#include <stdio.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int nextday(int da)
{
    int year, month, day;
    year = da / 10000;
    month = (da % 10000) / 100;
    day = da % 100;
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        m[1]++;
    ((month == 12) && (day == 31)) ? year++ : year;
    month = (month + day / m[month - 1]) % 12;
    day = day % m[month - 1] + 1;
    return day + month * 100 + year * 10000;
}
int islucky(int date)
{
    char r[10];
    sprintf(r, "%d", date);
    return strstr(r, "102") == NULL ? 0 : 1;
}
int main()
{
    int d1, d2, num = 0;
    while (scanf("%d%d", &d1, &d2) != EOF)
    {
        // printf("%d %d", d1, d2);
        for (; d1 != nextday(d2); d1 = nextday(d1)) // while(d1 d2 不是同一天)
        {
            if (islucky(d1))
            {
                num += 1;
                printf("%d\n", d1);
            }
        }
        printf("%d\n", num);
        num = 0;
    }
    return 0;
}