#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 10000007
#define N 100010
using namespace std;
int ans[N] = {0, 1, 1, 1, 1, 2};
int main()
{
  for (int i = 6; i <= 100; i++) {
    ans[i] = (ans[i - 1] % MOD + ans[i - 4] % MOD) % MOD;
  }

  int num;
  cin >> num;
  cout << ans[num];

  return 0;
}