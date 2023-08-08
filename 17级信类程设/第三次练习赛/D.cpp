#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int ans[40] = {0, 1, 2, 4};
  for (int i = 4; i <= 36; i++) {
    ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];
  }
  int num, n;
  cin >> num;
  while (num--) {
    cin >> n;
    cout << ans[n] << endl;
  }

  return 0;
}