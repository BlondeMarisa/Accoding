#include <bits/stdc++.h>
#include <cstddef>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100003
using namespace std;
int a[N];
int main()
{
  int num, tmp;
  unordered_map<int, int> m;

  cin >> num;
  for (int i = 0; i < 3 * num + 1; i++) {
    cin >> tmp;
    m[tmp]++;
    // a[tmp]++;
  }
  for (auto it = m.begin(); it != m.end(); it++)
    if (it->second == 1) {
      printf("%d", it->first);
      return 0;
    }
  return 0;
}