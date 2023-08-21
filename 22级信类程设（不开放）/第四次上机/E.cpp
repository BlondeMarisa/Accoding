#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 1000000007
#define N 10010
using namespace std;
ll a[N];
ll ans1, sum = 0;
int main()
{
  ll num;
  cin >> num;
  ll tmp;
  for (ll i = 0; i < num; i++)
  {
    cin >> tmp;
    a[tmp]++;
  }
  for (int i = 2; i <= 5000; i++)
  {
    if (a[i] >= 2LL)
    {
      ans1 = a[i] * (a[i] - 1) / 2 % MOD; // 1e8
      a[i] -= 2; // 其实没啥用，因为之后计算短边方案数肯定不会再用到a[i]了
      for (int j = 1; 2 * j <= i; j++)
      { // 2 * j <= i注意要取等！
        if (a[j] >= 1 && a[i - j] >= 1)
        {
          if (j != i - j)
            sum += ans1 * a[j] % MOD * a[i - j] % MOD;
          else if (j == i - j)
            sum += ans1 * a[j] % MOD * (a[j] - 1) / 2 % MOD;
        }
        sum %= MOD;
      }

      a[i] += 2;
    }
  }

  printf("%lld", sum);

  return 0;
}
