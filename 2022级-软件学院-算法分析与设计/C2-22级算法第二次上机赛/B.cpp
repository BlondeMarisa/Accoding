#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 204
using namespace std;
ll a[N][N], b[N][N], c[N][N];
int main()
{
  int num;
  cin >> num;
  while (num--)
  {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
        cin >> a[i][j];
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
        cin >> b[i][j];
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
      {
        ll sum = 0;
        for (int l = 1; l <= n; l++)
          sum += a[i][l] * b[l][j];
        c[i][j]=sum;
      }
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
        cout << c[i][j] << ' ';
      cout<<endl;
    }
  }
  return 0;
}