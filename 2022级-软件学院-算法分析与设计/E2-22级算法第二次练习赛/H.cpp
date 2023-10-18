//
// Created by Marisa on 2023/10/18.
//
#include <bits/stdc++.h>
#define ll long long
#define N 100010
using namespace std;
int s[2005], t[2005], memory[2002][2002];
int n_final, m_final, k;
ll dp(int n, int m)
{
  if (n < 0 || m < 0 )
    return 0x3f3f3f;
  if (m == 0 && n == 0)
    return 0;
  if (memory[m][n])
    return memory[m][n];
  ll res = INT32_MAX;
  for (int i = 0; i < k; i++)
  {
    res = min(res, t[i] + dp(n - s[i], m));
    res = min(res, t[i] + dp(n, m - s[i]));
  }
  memory[m][n] = res;
  return (res == INT32_MAX) ? -1 : res;
}
int main()
{
#ifdef LOCAL
  freopen("a.in", "r", stdin);
  freopen("a.out", "w", stdout);
#endif
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  while (num--)
  {
    memset(memory, 0, sizeof(memory));
    cin >> n_final >> m_final >> k;
    for (int i = 0; i < k; i++)
    {
      cin >> s[i] >> t[i];
    }
    cout << dp(n_final, m_final) << endl;
  }
  return 0;
}