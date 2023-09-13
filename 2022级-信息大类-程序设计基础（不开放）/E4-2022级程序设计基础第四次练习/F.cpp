#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  ll num;
  cin >> num;
  while (num--)
  {
    ll x, y;
    ll i = 0;
    cin >> x;
    if (x == 1)
      y = 3;
    else if (x - (x & -x))
    {
      y = (x & -x);
    }
    else
      y = x + 1;

    cout << y << endl;
  }
  return 0;
}