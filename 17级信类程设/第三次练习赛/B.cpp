#include <bits/stdc++.h>
#include <stdlib.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  string num;
  cin >> num;
  reverse(num.begin(), num.end());
  ll ans = atoll(&num[0]);
  cout << ans;
  // Reverse(num);
  return 0;
}