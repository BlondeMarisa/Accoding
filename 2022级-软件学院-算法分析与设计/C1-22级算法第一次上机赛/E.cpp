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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      int cnt = 0;
      for (int j = 0; j <= i; j++)
      {
        if (a[j] <= a[i])
          cnt++;
      }
      cout << cnt << ' ';
    }
    puts("");
  }
  return 0;
}