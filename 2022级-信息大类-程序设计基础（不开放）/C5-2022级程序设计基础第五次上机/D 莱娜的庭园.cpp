#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
double av3(double a, double b, double c)
{
    return (a + b + c) / 3;
}
int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    printf("%.1lf %.1lf\n%.1lf %.1lf\n%.1lf %.1lf\n%.1lf %.1lf", av3(x1, x2, x3), av3(y1, y2, y3), av3(x1, x2, x4),
           av3(y1, y2, y4), av3(x1, x3, x4), av3(y1, y3, y4), av3(x2, x3, x4), av3(y2, y3, y4));
    return 0;
}