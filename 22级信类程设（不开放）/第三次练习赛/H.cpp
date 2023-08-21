#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N], b[N], tmp;
int main()
{
  int num;
  cin >> num;

  for (int i = 0; i < 8; i++)
    cin >> a[i];
  while (num--)
  {
    int test1 = 0, test2 = 0;
    for (int i = 0; i < 8; i++)
    {
      cin >> tmp;
      a[i] ^= tmp;
      test1 += __builtin_popcount(tmp);

      while (tmp)
      {
        if (tmp % 16 > 9)
          test2++;
        tmp /= 16;
      }
    }
    for (int i = 0; i < 8; i++)
    {
      printf("%04X", a[i]);
    }
    printf(" %d %d", test1, test2);
    puts("");
  }

  return 0;
}