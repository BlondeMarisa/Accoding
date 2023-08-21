#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[10000];
int main()
{
  int times;
  int n;
  while (scanf("%d", &n) != EOF) {
    int m = 0, cnt = 0, flag = 0;
    int min_ans = 1;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) // 是因数
      {
        int c = 0;
        min_ans *= i; // 每个因数乘一遍
        while (n % i == 0) {
          n /= i;
          c++;
        }
        a[cnt++] = c;
        while (1 << m < c) // 找最小的应扩展到的因数的个数，用2的次方
          m++;
      }
    }
    if (n > 1) // 最后还剩一个质数
    {
      min_ans *= n;
      a[cnt++] = 1;
      while (1 << m < 1) // 找最小的应扩展到的因数的个数，用2的次方
        m++;
    }
    // 判断需不需要乘倍率扩大，只要有因数的出现次数无法达到应扩展的次数就需要

    for (int j = 0; j < cnt; j++) {
      if (a[j] != (1 << m)) {
        flag = 1;
        break;
      }
    }
    times = m + flag;
    printf("%d %d\n", min_ans, times);
  }
  return 0;
}