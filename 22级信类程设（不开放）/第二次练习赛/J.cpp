#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int date(int n, int m1, int d1, int m, int m2,
         int d2) // 两个日期差的天数
{
  int i, j, k, t1, t2, q, y, sum = 0;
  int a[13] = {
      0,  31, 28, 31, 30, 31, 30,
      31, 31, 30, 31, 30, 31}; /*数组中第一个元素直接赋值为0，与月份相对应*/
  for (i = n; i <= m;
       i++) /*外层循环，从开始年份开始自增循环+1年直到你输入的年份*/
  {
    if (i == n)
      t1 = m1; // 将起始月份赋值给变量t1
    else
      t1 = 1; // 当年份自增后  月份开始赋值为1（除起始年份和目标年份外 ）
    if (i == m)
      t2 = m2; // 当i自增到目标月份时 将目标月份的值赋给t2
    else
      t2 = 12;
    for (j = t1; j <= t2; j++) // t1,t2用来计算相应的月份差
    {
      if ((i % 4 == 0 && i % 100 != 0) ||
          i % 400 == 0) // 判断是否为闰年，若为闰年将二月份重新赋值为29天
        a[2] = 29;
      else
        a[2] = 28;
      if (i == n && j == m1)
        q = d1;
      else
        q = 1;
      if (i == n && j == m2)
        y = d2;
      else
        y = a[j];
      for (k = q; k <= y; k++) {
        sum++; // 算每个月份相差多少天
      }
    }
  }
  return sum; // 返回值就是两个日期之前相差的天数了
}
int h[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
  int date, year, month, day, distance, c, now;
  while (cin >> date) {
    for (int i = 1; i <= 12; i++) {
      for (int j = 1; j <= h[i]; j++) {
        c   = (j % 10) * 1000 + (j / 10) * 100 + (i % 10) * 10 + (i / 10);
        now = c * 10000 + i * 100 + j;
        
      }
    }
  }

  return 0;
}