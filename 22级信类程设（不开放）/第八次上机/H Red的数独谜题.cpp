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
int Errorline[2], Errorrow[2], cnt1, cnt2;
int times[10];
void swap(int *a, int *b)
{
  int tmp = *b;
  *b      = *a;
  *a      = tmp;
}
int map[12][12];
int main()
{
  for (int i = 1; i <= 9; i++)
    for (int j = 1; j <= 9; j++)
      scanf("%d", &map[i][j]);
  for (int j = 1; j <= 9; j++)
  {
    memset(times, 0, sizeof(times));
    for (int i = 1; i <= 9; i++)
    {

      times[map[i][j]]++;
      if (times[map[i][j]] == 2)
      {
        Errorline[cnt1++] = j;
      }
    }
  }
  for (int i = 1; i <= 9; i++)
  {
    memset(times, 0, sizeof(times));
    for (int j = 1; j <= 9; j++)
    {

      times[map[i][j]]++;
      if (times[map[i][j]] == 2)
      {
        Errorrow[cnt2++] = i;
      }
    }
  }
  memset(times, 0, sizeof(times));
  if (cnt1 == 0 && cnt2 == 0)
  {
    puts("Congratulations!");
  }
  else if (cnt2 == 0) // 两个数横向交换
  {
    // 确定Errorrow

    for (int i = 1; i <= 9; i++)
    {
      int flag = 1;
      memset(times, 0, sizeof(times));
      swap(&map[i][Errorline[0]], &map[i][Errorline[1]]);
      for (int j = 1; j <= 9; j++)
      {
        times[map[j][Errorline[0]]]++;
        if (times[map[j][Errorline[0]]] == 2) // 不是第i行
        {
          swap(&map[i][Errorline[0]], &map[i][Errorline[1]]); // 换回来
          flag = 0;
          break;
        }
      }
      if (flag)
        printf("(%d,%d) (%d,%d)\n", i, Errorline[0], i, Errorline[1]);
      else
        continue;
    }
  }
  else if (cnt1 == 0) // 两个数纵向交换
  {                   // 确定Errorline

    for (int i = 1; i <= 9; i++)
    {
      int flag = 1;
      memset(times, 0, sizeof(times));
      swap(&map[Errorrow[0]][i], &map[Errorrow[1]][i]);
      for (int j = 1; j <= 9; j++)
      {
        times[map[Errorrow[0]][j]]++;
        if (times[map[Errorrow[0]][j]] == 2) // 不是第i行
        {
          swap(&map[Errorrow[0]][i], &map[Errorrow[1]][i]); // 换回来
          flag = 0;
          break;
        }
      }
      if (flag)
        printf("(%d,%d) (%d,%d)\n", Errorrow[0], i, Errorrow[1], i);
      else
        continue;
    }
  }
  else // 正对角换或者斜对角换
  {
    int flag = 1;
    memset(times, 0, sizeof(times));
    swap(&map[Errorrow[0]][Errorline[1]],
         &map[Errorrow[1]][Errorline[0]]); // 交换斜对角
    for (int j = 1; j <= 9; j++)
    {
      times[map[Errorrow[0]][j]]++;
      if (times[map[Errorrow[0]][j]] == 2) // 不是第i行
      {
        printf("(%d,%d) (%d,%d)\n", Errorrow[0], Errorline[0], Errorrow[1],
               Errorline[1]);
        return 0;
      }
    }

    printf("(%d,%d) (%d,%d)\n", Errorrow[0], Errorline[1], Errorrow[1],
           Errorline[0]);
  }
  // printf("%d:%d %d\n", cnt1, Errorline[0], Errorline[1]);
  // printf("%d:%d %d\n", cnt2, Errorrow[0], Errorrow[1]);
}
