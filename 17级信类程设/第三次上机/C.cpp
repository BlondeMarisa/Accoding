#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int OneCount(ll n)
{
  int ans = 0;
  while (n) {
    n &= n - 1;
    ans++;
  }
  return ans;
}
int main()
{
  int num;
  ll n;
  scanf("%d", &num);
  while (num--) {
    scanf("%lld", &n);
    int ans = OneCount(n);
    printf("%d\n", ((ans == 1) ? 222 : ans)) ;
  }
  return 0;
}