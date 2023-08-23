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
int score[505], cnt;
int cmp(const void *a, const void *b)
{
  int *p = (int *)a;
  int *q = (int *)b;
  if (*p > *q)
    return 1;
  else if (*p < *q)
    return -1;
  else
    return 0;
}
int main()
{
  int tmp, sum = 0;
  double avgs, mids;
  while (scanf("%d", &tmp) != EOF)
  {
    if (tmp == -1)
    {
      qsort(score, cnt, sizeof(int), cmp);
      avgs = (double)sum / cnt;

      if (cnt % 2)
        mids = score[cnt / 2];
      else
        mids = (score[cnt / 2] + score[cnt / 2 - 1]) / (double)2;
      printf("%d %d %.2lf %.2lf\n", score[cnt - 1], score[0], avgs, mids);
      sum = 0;
      cnt = 0;
    }
    else
    {
      score[cnt++] = tmp;
      sum += tmp;
    }
  }
}
