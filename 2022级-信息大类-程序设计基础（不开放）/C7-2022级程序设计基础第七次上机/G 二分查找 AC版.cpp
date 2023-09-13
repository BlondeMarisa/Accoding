#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define MOD 100000007
#define N 500010
int a[N];
int query, left_pos, right_pos;

// 以下分成两段区间，右侧满足性质，左侧不满足性质
// 区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用，返回左段的右端点
int bsearch_1(int l, int r)
{
  while (l < r)
  {
    int mid = l + r >> 1;
    if (a[mid] >= query)
      r = mid; // check()判断mid是否满足性质
    else
      l = mid + 1;
  }
  return l;
}
// 区间[l, r]被划分成[l, mid - 1]和[mid, r]时使用，返回左段的右端点
int bsearch_2(int l, int r)
{
  while (l < r)
  {
    int mid = l + r + 1 >> 1;
    if (a[mid] <= query)
      l = mid;
    else
      r = mid - 1;
  }
  return l;
}
int main()
{
  int num, t;
  scanf("%d%d", &num, &t);
  for (int i = 0; i < num; i++)
    scanf("%d", &a[i]);

  while (t--)
  {
    scanf("%d", &query);
    left_pos  = bsearch_1(0, num - 1); // 找≥query段的左端点
    right_pos = bsearch_2(0, num - 1); // 找≤query段的右端点
    if ((a[left_pos] != query) || (a[right_pos] != query))
    {
      printf("-1");
    }
    else if (left_pos == right_pos)
    {
      printf("%d", left_pos);
    }
    else
      printf("%d %d", left_pos, right_pos);
    puts("");
  }
  return 0;
}