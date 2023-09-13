// ==========================
// Problem: P5717 【深基3.习8】三角形分类
// URL: https://www.luogu.com.cn/problem/P5717
// Limit: 1000 ms / 128 MB
// ===========================

#include <stdio.h>

int main()
{
  int a, b, c, a1 = 0, a2 = 0, a3 = 0;
  scanf("%d%d%d", &a, &b, &c);
  if (a <= b)
  {
    a1 = a;
    a2 = b;
  }
  else
  {
    a2 = a;
    a1 = b;
  }
  if (c <= a1)
  {
    a3 = a2;
    a2 = a1;

    a1 = c;
  }
  else if (c <= a2)
  {
    a3 = a2;
    a2 = c;
  }
  else
    a3 = c;

  if (a1 + a2 > a3)
  {
    if (a1 * a1 + a2 * a2 > a3 * a3)
    {
      printf("acute triangle\n");
    }
    else if (a1 * a1 + a2 * a2 == a3 * a3)
    {
      printf("right triangle\n");
    }
    else
    {
      printf("obtuse triangle\n"); // 说明是钝角三角形
    }
  }
  else
  {
    printf("no triangle\n");
    return 0;
    // 说明无法组成三角形
  }
  if (((a1 - a2 == 0) + (a1 - a3 == 0) + (a2 - a3 == 0)) == 1)
  {
    printf("isosceles triangle");
  }
  else if (((a1 - a2 == 0) + (a1 - a3 == 0) + (a2 - a3 == 0)) == 3)
  {
    printf("isosceles triangle");
    puts("");
    printf("equilateral triangle");
  }
  else
    return 0;

  return 0;
}