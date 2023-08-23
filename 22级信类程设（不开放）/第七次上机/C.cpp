#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define PI acos(-1)
#define MOD 10000
#define N 100010
typedef long long ll;
typedef unsigned long long ull;
#define MAXSIZE 100 /* 存储空间初始分配量 */
void swap(char *a, char *b)
{
  char tmp = *b;
  *b       = *a;
  *a       = tmp;
}
int main()
{
  unsigned int a, b;
  scanf("%u%u", &a, &b);
  char *p = (char *)&a;
  char *q = (char *)&b;
  swap(p, p + 3);
  swap(q, q + 3);
  swap(p + 2, p + 1);
  swap(q + 1, q + 2);
  // printf("%d %d\n", a, b);
  printf("%d", ((a % MOD) * (b % MOD)) % MOD);
}
