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
int cnt = 0;
char tmp[2010], maxname[2010], max2name[2010], minname[2010], backup[2010];
int maxlen, minlen = 0x3f3f3f, max2len, tmplen;
int main()
{
  while (scanf("%s", tmp) != EOF)
  {
    tmplen         = strlen(tmp);
    int tmp_backup = tmplen;
    if (cnt == 0)
    {
      maxlen = tmplen;
      strcpy(maxname, tmp);
      minlen = tmplen;
      strcpy(minname, tmp);
      // max2len = maxlen;
      // strcpy(max2name, tmp);
      cnt++;
      continue;
    }

    strcpy(backup, tmp);
    if (tmplen > maxlen) // 更新最大值，并把最大值让给第二大
    {
      max2len = maxlen;
      maxlen  = tmplen;
      strcpy(max2name, maxname);
      strcpy(maxname, tmp);
    }
    else if (tmplen > max2len)
    {
      max2len = tmplen;
      strcpy(max2name, tmp);
    }
    if (tmp_backup < minlen)
    {
      minlen = tmp_backup;
      strcpy(minname, backup);
    }
    cnt++;
  }
  printf("%d\n%s\n%s\n%s", cnt, maxname, max2name, minname);
  return 0;
}
