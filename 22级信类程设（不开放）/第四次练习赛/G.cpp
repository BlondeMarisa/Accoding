#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N];
int ans[N];
int main()
{
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++)
    cin >> a[i];
  ans[1] = 0;
  for (int i = 2; i <= num; i++)
  {
    int dp_min = N;
    for (int j = 1; j <= i - 1; j++)
    {
      if (a[j] >= i - j)
      {
        dp_min = min(dp_min, ans[j]);
      }
    }
    ans[i] = dp_min + 1;
  }
  cout << ans[num];
  return 0;
}