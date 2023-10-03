#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N];
int main()
{
  int num;
  cin >> num;
  while (num--)
  {
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    int pos = 0, ans = 1; // pos为最后一个亮灯的位置
    while (pos <= n - 2)
    {
      if (a[pos + 1] - a[pos] <= d) // 如果下一个灯在范围内
        pos++;
      else
      {
        pos++;
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}