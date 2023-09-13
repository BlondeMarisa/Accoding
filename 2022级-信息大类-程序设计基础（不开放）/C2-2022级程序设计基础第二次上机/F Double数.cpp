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
char s[11], front[11], back[11];
int main()
{
  scanf("%s", s);
  int len = strlen(s);
  strncpy(front, s, len / 2);
  // puts(front);
  int frontnum = atoi(front), backnum = atoi(&s[len / 2]);
  int num = atoi(s);
  if (frontnum * 2 == backnum)
  {
    puts("Double");
    printf("%d", frontnum);
  }
  else
  {
    puts("Single");
    int doubleans = 2 * num;
    printf("%d%d", num, doubleans);
  }

  return 0;
}