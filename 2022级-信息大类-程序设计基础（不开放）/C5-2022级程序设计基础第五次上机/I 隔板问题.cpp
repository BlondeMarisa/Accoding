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

int method[N], methodcnt;
int n, k;
void assign(int rest, int t) // 剩余多少个元素，当前正在处理第几组
{
  if (rest == 0)
    return;
  if (t == k)
  {
    method[t] = rest;
    for (int j = 1; j <= t; j++)
    {
     printf("%d ",method[j]);
    }
    puts("");
    methodcnt++;
    return;
  }
  for (int i = 1; i <= rest; i++) // 枚举第一组分得几个
  {
    method[t] = i;
    assign(rest - i, t + 1);
  }
}

int main()
{
  scanf("%d%d",&n,&k) ;// n个元素分成k组，n-1个空放k-1个板
  assign(n, 1);
  printf("%d",methodcnt);
  return 0;
}