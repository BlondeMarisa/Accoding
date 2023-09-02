#include <ctype.h>
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
int step[12];
int n;
int visited[12];
void dfs(int current)
{
  if (current == n + 1)
  {
    for (int i = 1; i <= n; i++)
    {
      printf("%d ", step[i]);
    }
    puts("");
    return;
  }
  for (int i = 1; i <= n; i++)
  {
    if (!visited[i])
    {
      visited[i]    = 1;
      step[current] = i;
      dfs(current + 1);
      visited[i] = 0;
    }
  }
}
int main()
{

  scanf("%d", &n);
  dfs(1);
}