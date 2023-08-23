#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 200010
using namespace std;
int s[N], cnt = 1, pos[3 * N];
int main()
{
  char c;
  while ((c = getchar()) != EOF)
  {
    if (c == 'B')
    {
      s[cnt] = s[cnt - 1] + 1;
    }

    if (c == 'R')
    {
      s[cnt] = s[cnt - 1] - 1;
    }

    cnt++;
  }
  // printf("%d", s[2]); // 前2个的和
  // 1~(cnt-1)这些数
  // l~r和=s[r]-s[l-1]

  for (int l = 1; l <= cnt - 1; l++)
  {
    // cout << s[l] << ' ';
    s[l] += N;
  } // 防止出现负数
    // cout << endl << cnt - 1 << endl;
  int length = 0;
  for (int l = 1; l <= cnt - 1; l++)
  {
    if (s[l] == N)
      length = max(l, length);

    else if (pos[s[l]])
    {
      length = max(length, l - pos[s[l]]);
      // cout << length << endl;
    }
    else
      pos[s[l]] = l;
  }
  cout << length;
  return 0;
}
