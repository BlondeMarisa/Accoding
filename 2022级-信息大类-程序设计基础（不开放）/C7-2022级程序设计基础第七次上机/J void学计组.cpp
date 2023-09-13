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

char s[N], op[N], trash;
char oper[130][210];
ll jicun[32];
ll tmp1, tmp2, tmp3;
int take_cnt, right_finished;
int main()
{
  int num;
  scanf("%d", &num);
  fgets(oper[0], 1000, stdin);

  for (int i = 1; i <= num; i++)
    fgets(oper[i], 1000, stdin); // 需要吃空白符！scanf%s不用
  int p = 0;                     // 当前是第几条指令
  // puts(oper[6]);
  while (p <= num)
  {
    p++;
    if (take_cnt >= 1e6)
    {
      puts("program can't be finished");
      return 0;
    }
    sscanf(oper[p], "%s", op);
    if (strcmp(op, "add") == 0)
    {
      sscanf(oper[p], "add %c%lld,$%lld,$%lld", &trash, &tmp1, &tmp2, &tmp3);
      if (tmp1)
      {
        jicun[tmp1] = jicun[tmp2] + jicun[tmp3];
      }
      take_cnt++;
    }
    else if (strcmp(op, "sub") == 0)
    {
      sscanf(oper[p], "sub %c%lld,$%lld,$%lld", &trash, &tmp1, &tmp2, &tmp3);
      if (tmp1)
      {
        jicun[tmp1] = jicun[tmp2] - jicun[tmp3];
      }
      take_cnt++;
    }
    else if (strcmp(op, "ori") == 0)
    {
      sscanf(oper[p], "ori %c%lld,$%lld,%lld", &trash, &tmp1, &tmp2, &tmp3);
      if (tmp1)
      {
        jicun[tmp1] = jicun[tmp2] | tmp3;
      }
      take_cnt++;
    }
    else if (strcmp(op, "li") == 0)
    {
      sscanf(oper[p], "li %c%lld,%lld", &trash, &tmp1, &tmp2);
      if (tmp1)
      {
        jicun[tmp1] = tmp2;
      }
      take_cnt++;
    }
    else if (strcmp(op, "lui") == 0)
    {
      sscanf(oper[p], "lui %c%lld,%lld", &trash, &tmp1, &tmp2);
      if (tmp1)
      {
        jicun[tmp1] = tmp2 * 16 * 16 * 16 * 16;
      }
      take_cnt++;
    }
    else if (strcmp(op, "beq") == 0)
    {
      sscanf(oper[p], "beq %c%lld,$%lld,%lld", &trash, &tmp1, &tmp2, &tmp3);
      if (jicun[tmp1] == jicun[tmp2])
      {
        p += tmp3;
      }
      take_cnt++;
    }
    else if (strcmp(op, "syscall") == 0)
    {
      take_cnt++;
      if (jicun[2] == 10)
      {
        right_finished = 1;
        break;
      }
    }
    else if (strcmp(op, "nop") == 0)
    {
      take_cnt++;
    }
    jicun[0] = 0;
  }
  if (right_finished)
    puts("program is finished running");
  else
    puts("program is finished running(dropped off bottom)");
  for (int i = 0; i < 32; i++)
  {
    printf("%08x ", jicun[i]);
    if (i % 4 == 3)
      puts("");
  }
  return 0;
}