#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

ll num, x, tmp;
ll ans[N];
ll divide(ll n)
{
  if (ans[n])
    return ans[n];
  ll p = 1, q = n;
  ll j;
  for (j = sqrt(n); j > 1; j--) // 肯定是往下找更快，为什么起点不是sqrt+1？
  {
    if (n % j == 0)
    {
      q             = j;
      p             = n / q;
      return ans[n] = (p + q) * x + divide(p) + divide(q);
    }
  }
  return ans[n] = n;
}
int main()
{

  scanf("%lld%lld", &num, &x);
  if (num == 0)
  {
    puts("0");
    return 0;
  }
  while (num--)
  {
    scanf("%lld", &tmp);
    printf("%lld\n", divide(tmp));
  }

  return 0;
}