#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
ll a[5][N];
ll A(ll m, ll n)
{
  if (a[m][n])
    return a[m][n];
  if (m == 0)
  {
    a[m][n] = n + 1;
    return a[m][n];
  }
  else if (n == 0)
  {
    a[m][n] = A(m - 1, 1);
    return a[m][n];
  }
  else
  {
    a[m][n] = A(m - 1, A(m, n - 1));
    return a[m][n];
  }
}
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    ll n, m;
    cin >> m >> n;
    cout << A(m, n) << endl;
  }

  return 0;
}