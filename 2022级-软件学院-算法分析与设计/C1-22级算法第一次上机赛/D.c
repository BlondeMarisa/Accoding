#include <math.h>
#include <stdio.h>
#include <string.h>

#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 10007
#define N 200007

ll a_xishu[N], a_cishu[N], b_xishu[N], b_cishu[N], c_xishu[N], c_cishu[N];
int main()
{

  int q;
  scanf("%d", &q); // cal cishu
  while (q--)
  {
    // memset(a_cishu,0,N);
    // memset(a_xishu,0,N);
    // memset(b_cishu,0,N);
    // memset(b_xishu,0,N);
    // memset(c_cishu,0,N);
    // memset(c_xishu,0,N);
    int n;
    scanf("%d", &n); // first cishu
    for (int i = 0; i < n; i++)
      scanf("%lld", &a_xishu[i]);
    for (int i = 0; i < n; i++)
      scanf("%lld", &a_cishu[i]);
    int m;
    scanf("%d", &m); // second cishu
    for (int i = 0; i < m; i++)
      scanf("%lld", &b_xishu[i]);
    for (int i = 0; i < m; i++)
      scanf("%lld", &b_cishu[i]);

    // merge
    int a_ptr = 0, b_ptr = 0, c_ptr = 0;
    while ((a_ptr < n) && (b_ptr < m)) // both non empty
    {
      if (a_cishu[a_ptr] < b_cishu[b_ptr]) // a 次数小
      {
        c_cishu[c_ptr] = a_cishu[a_ptr];
        c_xishu[c_ptr] = a_xishu[a_ptr];
        a_ptr++, c_ptr++;
      }
      if (a_cishu[a_ptr] > b_cishu[b_ptr])
      {
        c_cishu[c_ptr] = b_cishu[b_ptr];
        c_xishu[c_ptr] = b_xishu[b_ptr];
        b_ptr++, c_ptr++;
      }
      if (a_cishu[a_ptr] == b_cishu[b_ptr])
      {
        c_cishu[c_ptr] = a_cishu[a_ptr];
        c_xishu[c_ptr] = b_xishu[b_ptr] + a_xishu[a_ptr];
        a_ptr++, b_ptr++, c_ptr++;
      }
    }
    while ((a_ptr < n)) // a non empty
    {
      c_cishu[c_ptr] = a_cishu[a_ptr];
      c_xishu[c_ptr] = a_xishu[a_ptr];
      a_ptr++, c_ptr++;
    }
    while ((b_ptr < m)) // b non empty
    {
      c_cishu[c_ptr] = b_cishu[b_ptr];
      c_xishu[c_ptr] = b_xishu[b_ptr];
      b_ptr++, c_ptr++;
    }
    printf("%d\n", c_ptr);
    for (int i = 0; i < c_ptr; i++)
      printf("%lld ", c_xishu[i]);
    puts("");
    for (int i = 0; i < c_ptr; i++)
      printf("%lld ", c_cishu[i]);
    puts("");
  }

  return 0;
}