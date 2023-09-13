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

int cnt;
int value[1010][2]; // value[i][0] id  [i][1]  value
int main()
{
  for (int i = 0; i < 1010; i++)
  {
    value[i][0] = -1;
  }
  int num;
  scanf("%d", &num);
  while (num--)
  {
    int op, id, val;
    int flag = 0;
    scanf("%d", &op);
    switch (op)
    {
    case 1:
      scanf("%d%d", &id, &val);
      value[cnt][0] = id;
      value[cnt][1] = val;
      cnt++;
      break;
    case 2:
      scanf("%d", &id);
      for (int i = 0; i < cnt; i++)
      {
        if (value[i][0] == id)
        {
          printf("%d\n", value[i][1]);
          flag = 1;
          break;
        }
      }
      if (!flag)
      {
        puts("Not Found!");
      }
      break;
    case 3:
      flag = 0;
      scanf("%d", &id);
      for (int i = 0; i < cnt; i++)
      {
        if (value[i][0] == id)
        {
          value[i][0] = -1;
          flag        = 1;
          break;
        }
      }
      if (!flag)
      {
        puts("Not Found!");
      }
      break;
    }
  }
  return 0;
}