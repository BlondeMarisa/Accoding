#include <stdio.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

int gcd(int a, int b)
{
  int r;
  if (b == 0)
    return a < 0 ? -a : a;
  while ((r = a % b) != 0) {
    a = b;
    b = r;
  }
  return b < 0 ? -b : b;
}
int main()
{
  int a, b, sum=2, i, j, index = 0;
  scanf("%d%d", &a, &b);
  for (;; sum++) {
    i = sum - 1;
    j = sum - i;
    for (; i != 0; i--, j++) {
      if (gcd(i, j) == 1) {
        index++;
        if (i == a && b == j) {
          printf("%d", index);
          return 0;
        }
      }
    }
  }

  return 0;
}