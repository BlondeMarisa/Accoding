#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N], b[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  while (num--)
  {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
      cin >> b[i];
    sort(b, b + n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
      sum += abs(a[i] - b[i]);
    cout<<sum<<endl;
  }
  return 0;
}