#include <stdio.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

int main()
{
  ll num;
  scanf("%lld", &num);
  int ans = 0;
  while (num) {
    num &= (num - 1);
    ans++;
  }
  printf("%d", ans);
  return 0;
}