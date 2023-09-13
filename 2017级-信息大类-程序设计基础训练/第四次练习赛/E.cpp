#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int num;
  cin >> num;
  string resource = "naive", s;
  cin >> s;
  int cnt = 0;
  for (auto it=s.begin();it!=s.end();it++)
  {
    if (*it == '?')
    {
      *it = resource[cnt % 5];
      cnt++;
    }
  }
 // printf("%d\n", cnt);
  puts(s.c_str());
  return 0;
}