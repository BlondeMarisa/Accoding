#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int ans[N];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  while (num--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
    {
      for (int j = 1; j <= b; j++)
      {
        for (int l = 1; l <= c; l++)
        {
          ans[i + j + l]++;
        }
      }
    }
    int maxans = 0, x;
    for (int i = 3; ans[i]; i++)
    {
      if (ans[i] > maxans)
      {
        maxans = ans[i];
        x      = i;
      }
    }
    cout<<x<<endl;
    memset(ans, 0, sizeof(ans));
  }
  return 0;
}