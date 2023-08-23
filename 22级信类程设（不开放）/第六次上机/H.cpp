#include <bits/stdc++.h>
#include <iostream>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int n, m;
char STD[5010], ANS[5010], trash[100];
int a[N], b[N];
int tmp;
int main()
{
  scanf("%s", trash);
  while (scanf("%d", &tmp) == 1)
  {
    a[n++] = tmp;
  }
  scanf("%s", trash);
  while (scanf("%d", &tmp) == 1)
  {
    b[m++] = tmp;
  }
  //   for (int i = 0; i < n; i++)
  //     printf("%d ", a[i]);
  //   puts("");
  //   for (int i = 0; i < m; i++)
  //     printf("%d ", b[i]);
  //   puts("");

  printf("Expected: %d, Received: %d\n", n, m);
  if (n != m)
    puts("I Appreciate Your Creativity");
  else // n==m，但是否完全匹配并不知道
  {
    for (int i = 0; i < n; i++)
      if (a[i] != b[i])
      {
        puts("I Appreciate Your Creativity");
        return 0;
      }
    puts("Good Job!");
  }
  // printf("\n%d", tmp);

  return 0;
}