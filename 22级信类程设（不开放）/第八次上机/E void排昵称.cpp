#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define PI acos(-1)
#define MOD 100000007
#define N 100010
typedef long long ll;
typedef unsigned long long ull;
#define MAXSIZE 100 /* 存储空间初始分配量 */
char name[102][102];
int cmp(const void *p1, const void *p2)
{
  char *a = (char *)p1;
  char *b = (char *)p2;
  return strcmp(a, b);
}
int main()
{
  int i = 0;
  while (scanf("%s", name[i]) != EOF)
  {
    i++;
  }
  qsort(name, i, sizeof(name[0]), cmp);
  for (int j = 0; j < i; j++)
    puts(name[j]);
}