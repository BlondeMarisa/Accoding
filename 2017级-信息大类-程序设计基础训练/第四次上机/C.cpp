#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int L, R, ans = 0;
  cin >> L >> R;
  for (int i = L; i <= R; i++) {
    int j = i;
    while (j) {
      if (j % 10 == 2)
        ans++;
      j /= 10;
    }
  }
  cout << ans;
  return 0;
}