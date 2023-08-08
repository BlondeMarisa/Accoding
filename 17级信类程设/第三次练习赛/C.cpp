#include <bits/stdc++.h>
#include <string>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int c, d;
  c = atoi(&a[0]);
  d = atoi(&b[0]);
  cout << c * d;
  return 0;
}