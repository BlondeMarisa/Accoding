#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  int m, n;
  cin >> m >> n;
  if ((n >= 2 * m) && (4 * m >= n) && (!((n - 2 * m) % 2)) &&
      (!((4 * m - n) % 2))) {
    cout << (4 * m - n) / 2 << " " << (n - 2 * m) / 2;
  } else {
    cout << "Wrong number";
  }
}