#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
char a[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  while (num--)
  {
    cin >> a;

    char *p = a;
    while (*p == '9')
    {
      putchar('9');
      p++;
    }
    int len = strlen(p);
    if (len == 1)
    {
      putchar(*p);
    }

    else if (len != 0)
    {
      len--;
      while (len--)
      {
        putchar('9');
      }
    }
    puts("");
  }
  return 0;
}