#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int num, n;
  cin >> num;
  while (num--) {
    scanf("%d", &n);
    if (n % 2) {
      puts("No");
    } else
      puts("Yes");
  }
  return 0;
}