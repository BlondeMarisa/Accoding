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

int num[10];
int main()
{
  for (int i = 0; i < 10; i++)
    scanf("%d", &num[i]);
  ll x;

  scanf("%lld", &x);
  ll backup_x = x;
  ll ans      = x - 1;

  while (1)
  {
    while (x)
    {
      if (num[x % 10])
        num[x % 10]--;
      else
      {
        printf("%lld", ans);
        return 0;
      }
      x /= 10;
    }
    backup_x++;
    x = backup_x;
    ans++;
  }

  return 0;
}