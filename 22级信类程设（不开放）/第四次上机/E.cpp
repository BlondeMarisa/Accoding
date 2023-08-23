#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
bool isprime(int a)
{
  bool flag = 1;
  for (int i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}
int main()
{
  int num, n;
  cin >> num;
  while (num--)
  {
    scanf("%d", &n);
    for (int i = 3;; i++)
    {
      if (isprime(i) && isprime(n - i))
      {
        printf("%d %d\n", i, n - i);
        break;
      }
    }
  }
  return 0;
}