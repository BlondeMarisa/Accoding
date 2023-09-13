#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 500010
using namespace std;
ll fail[N], p[N], ans[N], remain[N]; // fail=0还在场
int main()
{
  ll num;
  cin >> num;
  while (num--)
  {
    memset(fail, 0, N);
    ll n;
    cin >> n;
    for (ll i = 1; i <= (1 << n); i++)
      cin >> p[i];
    for (ll i = 1; i <= n; i++)
    {
      ll cnt = 1;
      for (ll j = 1; j <= (1 << n); j++)
      {
        if (!fail[j])
        {
          remain[cnt++] = j;
        }
      }

      for (ll k = 1; k <= (1 << (n - i)); k++)
      {
        if (p[remain[2 * k - 1]] < p[remain[2 * k]]) // 2k-1被淘汰
        {
          fail[remain[2 * k - 1]] = 1;
          ans[remain[2 * k - 1]]  = p[remain[2 * k]];
        }
        else
        {
          fail[remain[2 * k]] = 1;
          ans[remain[2 * k]]  = p[remain[2 * k - 1]];
        }
        if (i == n)
        {
          if (p[remain[2 * k - 1]] < p[remain[2 * k]]) // 2k-1被淘汰
          {
            fail[remain[2 * k - 1]] = 1;
            ans[remain[2 * k - 1]]  = p[remain[2 * k]];
            sort(p + 1, p + (1 << n) + 1);
            ans[remain[2 * k]] = p[(1 << n) - 1];
            // ans[remain[2 * k]] = p[remain[2 * k - 1]];
          }
          else
          {
            fail[remain[2 * k]] = 1;
            ans[remain[2 * k]]  = p[remain[2 * k - 1]];
            sort(p + 1, p + (1 << n) + 1);
            ans[remain[2 * k - 1]] = p[(1 << n) - 1];
            // ans[remain[2 * k - 1]] = p[remain[2 * k]];
          }
        }
      }
    }
    for (ll i = 1; i <= (1 << n); i++)
      cout << ans[i] << ' ';
    puts("");
  }
  return 0;
}
