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
#define RIGHT 1
#define LEFT 0
int cnt = 1;
int num;
int wash(int n, int dir)
{
  if (n == 1)
    return 1;
  if (dir == RIGHT)
    return n + 1 - wash(n, LEFT);
  else
    return 2 * wash(n / 2, RIGHT);
}

int main()
{

  scanf("%d", &num);
  printf("%d", wash(num, LEFT));

  return 0;
}