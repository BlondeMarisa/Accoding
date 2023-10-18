//
// Created by Marisa on 2023/10/18.
//
#include <bits/stdc++.h>
#define ll long long
#define N 10010
using namespace std;
ll ans[N], cnt;
ll val[N], dp[N], n;
int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> val[i];
  for (int j = 1; j <= n; j++)
  {
    ll q = -2147483647;
    for (int i = 1; i <= j; i++)
    {
      if (q < val[i] + dp[j - i])
      {
        q      = val[i] + dp[j - i];
        ans[j] = i;
      }
    }
    dp[j] = q;
  }
  cout << dp[n] << endl;
  int length = n;
  while (length > 0)
  {
    length = length - ans[length];
    cnt++;
  }
  cout << cnt << endl;
  while (n > 0)
  {
    cout << ans[n] << ' ';
    n = n - ans[n];
    cnt++;
  }
  return 0;
}