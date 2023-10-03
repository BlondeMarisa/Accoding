#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 3048580
using namespace std;
ll fail[N], p[N], ans[N], remain[N]; // fail=0还在场
int main()
{
  ll num;
  cin >> num;
  while (num--)
  {
    memset(fail, 0, sizeof(fail));//memset第三个参数又写错了，我服了
    ll n;
    cin >> n;
    for (ll i = 0; i < (1 << n); i++)
      cin >> p[i];
    //假设一共有N只猫，则有logN轮比赛，以下做法为logN个N相加，实际可以n+n/2+n/4..线性，每轮扔掉一半，记个答案就行
    for (ll i = 1; i <= n; i++)//n轮比赛
    {
      ll cnt = 1;
      for (ll j = 0; j < (1 << n); j++)
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
            nth_element(p, p + 1, p + (1 << n), greater<ll>());
            ans[remain[2 * k]] = p[1];
          }
          else
          {
            nth_element(p, p + 1, p + (1 << n), greater<ll>());
            ans[remain[2 * k - 1]] = p[1];
          }
        }
      }
    }
    for (ll i = 0; i < (1 << n); i++)
      cout << ans[i] << ' ';
    puts("");
  }
  return 0;
}
