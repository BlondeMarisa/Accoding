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

int sturank[10003];
int main()
{
  int n, m;
  scanf("%d%d", &n, &m); // 助教n个，学生m个
  int maxscore = -1, minscore = 500000, maxrightnum = -1;
  int rightnum = 0;
  while (n--)
  {
    int score = 0;
    rightnum  = 0;
    for (int i = 1; i <= m; i++)
    {
      scanf("%d", &sturank[i]);
      if (sturank[i] <= 0)
        score--;
      else if (sturank[i] == i)
      {
        score += 3;
        rightnum++;
      }
      else if (sturank[i] % m == i || (sturank[i] % m == 0 && i == m))
      {
        score++;
        rightnum++;
      }
    }
    if (score < 0)
      score = 0;
    maxscore    = max(score, maxscore);
    maxrightnum = max(rightnum, maxrightnum);
    minscore    = min(score, minscore);
  }
  printf("%d %d\n", maxscore, minscore);
  if (maxrightnum == m)
    puts("YES!");
  else if (maxrightnum < m && maxrightnum >= m / 2)
    puts("Good!");
  else if (maxrightnum < m / 2)
    puts("Not bad!");
  else if (maxrightnum == 0)
    puts("NO~");
  return 0;
}