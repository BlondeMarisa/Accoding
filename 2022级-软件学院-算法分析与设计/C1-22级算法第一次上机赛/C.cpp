#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 10007
#define N 100007
using namespace std;
ll a[N], b[N];
int main()
{
  int n;
  cin >> n; // first cishu
  for (int i = 0; i < n + 1; i++)
    cin >> a[i];
  int m;
  cin >> m; // second cishu
  for (int i = 0; i < m + 1; i++)
    cin >> b[i];
  int q;
  cin >> q; // cal cishu
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    ll asum = 0, bsum = 0;
    ll aweight = 1, bweight = 1;
    for (int i = 0; i < n + 1; i++, aweight = aweight % MOD * x % MOD)
      asum += (a[i] % MOD * aweight % MOD) % MOD;
    for (int i = 0; i < m + 1; i++, bweight = bweight % MOD * y % MOD)
      bsum += (b[i] % MOD * bweight % MOD) % MOD;
    cout << ((asum % MOD) * (bsum % MOD)) % MOD << endl;
  }

  return 0;
}