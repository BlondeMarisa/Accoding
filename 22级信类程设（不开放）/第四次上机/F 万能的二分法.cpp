#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

double y;
double f(double x)
{
  return exp(-sqrt(x / 10)) / (log(x / 10)) - y;
} // 检查x是否满足某种性质

double bsearch_3(double l, double r)
{
  // eps 表示精度，取决于题目对精度的要求
  while (r - l > eps)
  {
    double mid = (l + r) / 2;
    if (f(mid) < 0)
      r = mid;
    else
      l = mid;
  }
  return l;
}
int main()
{
  scanf("%lf", &y);
  printf("%.3lf", bsearch_3(10, 30));
  return 0;
}