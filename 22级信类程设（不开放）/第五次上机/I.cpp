#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
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
      cout << method[j] << ' ';
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
  cin >> n >> k; // n个元素分成k组，n-1个空放k-1个板
  assign(n, 1);
  cout << methodcnt;
  return 0;
}