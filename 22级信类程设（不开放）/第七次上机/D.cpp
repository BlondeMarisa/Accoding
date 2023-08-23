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
char ans[10000], tmp[12];
int main()
{
  int l, r;
  scanf("%d%d", &l, &r);
  // getchar(); // 吃一口\r\n
   scanf("%s", ans);
  while (scanf("%s", tmp) != EOF)
  {
    strcat(ans, tmp);
  }
  // puts(ans);
  for (int i = l - 1; i <= r - 1; i++)
    printf("%c", ans[i]);

  return 0;
}