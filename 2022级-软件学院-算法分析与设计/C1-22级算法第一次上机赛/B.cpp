#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 998244353
#define N 100010
using namespace std;
ll a[N];
int main()
{
  int num, query;
  a[0] = 1, a[1] = 1;

  for (int i = 2; i <= 1000; i++) // fill a[i]
  {
    ll sum = 0;
    for (int j = 1; j <= i; j++)
    {
      sum+=(a[j-1]*a[i-j])%MOD;
    }
    a[i]=sum%MOD;
  }
  cin >> num;
  while (num--)
  {
    cin >> query;
    printf("%lld\n", a[query]);
  }
  return 0;
}