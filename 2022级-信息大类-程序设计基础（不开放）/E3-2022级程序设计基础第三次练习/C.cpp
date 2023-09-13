#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
char s[1020];
int main()
{
  int num, mood = 0;
  cin >> num;
  getchar();
  getchar();
  char c;
  int i = 0;
  while ((c = getchar()) != 'c') {
    if (c == 'n')
      mood++;
    else
      mood += 2;
  }
  printf("%d", mood);
  return 0;
}