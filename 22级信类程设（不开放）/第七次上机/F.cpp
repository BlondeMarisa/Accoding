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
char mother[300], son[300];
int pos = 0, length;
void reverse(char *start)
{
  char *end = start + length - 1;
  while (start < end)
  {
    char tmp = *end;
    *end     = *start;
    *start   = tmp;
    start++, end--;
  }
}
int main()
{

  scanf("%s%s", mother, son);
  length         = strlen(son);
  char *find_pos = mother;
  char *find_ans = strstr(find_pos, son);
  while (find_ans != NULL)
  {
    reverse(find_ans);
    find_pos = find_ans + length;
    find_ans = strstr(find_pos, son);
  }
  puts(mother);
}
