#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

int main()
{
  int num;
  char s[300];

  scanf("%d", &num);
  fgets(s, 100000, stdin);
  while (num--)
  {
    fgets(s, 100000, stdin);
    s[0]    = toupper(s[0]);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
      if (!isalnum(s[i]))
      {
        s[i + 1] = toupper(s[i + 1]);
      }
    }
    printf("%s", s);
  }

  return 0;
}
// 哈哈，读入一个数之后记得吸一下换行符啊！
// fgets保留换行符，所以输出时候使用printf就自带换行了