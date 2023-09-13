#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  char c;
  while ((c = getchar()) != EOF) {
    if (isalpha(c))
      c = c - 'a' + 10;

    else
      c = c - '0';
    for (int i = 3; i >=0; i--) {
      printf("%d", (c >> i) & 1);
    }
  }

  return 0;
}