#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int num[10];
int main()
{
  for (int i = 0; i < 10; i++)
    scanf("%d", &num[i]);
  ll x;

  cin >> x;
  ll backup_x = x;
  ll ans      = x - 1;

  while (1) {
    while (x) {
      if (num[x % 10])
        num[x % 10]--;
      else {
        cout << ans;
        return 0;
      }
      x /= 10;
    }
    backup_x++;
    x=backup_x;
    ans++;
  }

  return 0;
}