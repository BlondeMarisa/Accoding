#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 10010
using namespace std;
int magic[N];
int main()
{
  int T, n;
  cin >> T;
  while (T--) {
    cin >> n;
    int oddnum = 0, evennum = 0;
    int mincnt = 50;
    for (int i = 0; i < n; i++) {
      cin >> magic[i];

      if (magic[i] % 2 == 1)
        oddnum++;
      else {
        int cnt = 0;
        while (magic[i] % 2 == 0) {
          cnt++;
          magic[i] /= 2;
        }
        evennum++;
        mincnt = min(mincnt, cnt);
      }
    }
    if (oddnum)
      printf("%d\n", evennum);

    else {
      printf("%d\n", evennum - 1 + mincnt);
    }
    // cout << oddnum << " " << evennum << endl;
  }

  return 0;
}