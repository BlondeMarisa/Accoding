#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define MOD 100000007
#define N 100010
typedef long long ll;
int a[N];

int main()
{
  ll a, b;
  scanf("%lld%lld", &a, &b);
  printf("%lld %% %lld = %lld", a, b, a % b);
  
}
