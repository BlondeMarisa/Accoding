#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int x;
  while (scanf("%d", &x) != EOF)
  {
    int cnt = 0;

    while (x != 1) // 所有数都反推回1
    {
      if (x == 0)
      {
        cnt += 32;
        x = 1;
      }
      else if (x == -2)
      {
        cnt++;
        x = 1;
      }
      else if (x & 1)
      {
        x = ~x;
        cnt++;
      }
      else
      {
        x >>= 1;
        cnt++;
      }
    }

    cout << cnt;
    puts("");
  }

  return 0;
}