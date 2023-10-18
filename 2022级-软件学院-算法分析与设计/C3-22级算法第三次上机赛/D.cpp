//
// Created by Marisa on 2023/10/18.
//
//
// Created by Marisa on 2023/10/18.
//
#include <bits/stdc++.h>
#define ll long long
#define N 10010
using namespace std;
ll ans[N], cnt;
ll val[N], dp[N],pd[N] ,n;
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
  for (int j = 1; j <= n; j++)
  {
    ll q = 2147483647;
    for (int i = 1; i <= j; i++)
    {
      if (q > val[i] + pd[j - i])
      {
        q      = val[i] + pd[j - i];
      }
    }
    pd[j] = q;
  }

  cout << dp[n]-pd[n] << endl;

  return 0;
}