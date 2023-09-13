#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int s[N], d[N], n, t, earlydate, id;
int main()
{
  cin >> n >> t;

  for (int i = 1; i <= n; i++)
    cin >> s[i] >> d[i];
  while (1)
  {
    // 对于每一天，对于每一个流星雨，开始找是否能观测到
    for (int i = 1; i <= n; i++)
    {
      if (((t >= s[i])) && ((t - s[i]) % d[i] == 0)) // find
      {
        cout << t << ' ' << i;
        return 0;
      }
    }

    t++;
  }

  return 0;
}