#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int x, a;
  cin >> x >> a;
  if (x <= a)
  {
    printf("%d", a - x);
  }
  else
  {
    printf("0");
  }
  if (a == x)
    puts("\nIndifferentiable Point");
  return 0;
}