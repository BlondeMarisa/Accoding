#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define N 1006
#define MOD 100000007
using namespace std;
ll gcd(ll a, ll b)
{
  ll r;
  if (b == 0)
    return a < 0 ? -a : a;
  while ((r = a % b) != 0) {
    a = b;
    b = r;
  }
  return b < 0 ? -b : b;
}

int main()
{
  ll num;
  cin >> num;
  ll a[N], max_gcd;
  cin >> a[0] >> a[1];
  max_gcd = gcd(a[0], a[1]);
  for (int i = 2; i < num; i++) {
    cin >> a[i];
    max_gcd = gcd(a[i], max_gcd);
  }
  // TLE
  //   for (ll i = max_gcd - 1; i != 1; i--) {
  //     if (max_gcd % i == 0) {
  //       cout << i << endl;
  //       break;
  //     }
  //   }
  for(ll i=2;i*i<=max_gcd;i++){
    if(max_gcd%i==0){
      max_gcd/=i;
      break;
    }
  }
  cout << max_gcd << endl;
  return 0;
}