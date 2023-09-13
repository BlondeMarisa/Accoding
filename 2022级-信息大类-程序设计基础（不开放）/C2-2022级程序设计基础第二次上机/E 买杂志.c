#include <stdio.h>
int main()
{
    double d, sum = 0, fy = 0;
    int bx = 0;
    while (scanf("%lf", &d) != EOF)
    {
        sum = sum + d;
        bx += d - ((int)d % 10);
    }
    fy = sum - bx;
    printf("%d %.2lf", bx, fy);
    return 0;
}