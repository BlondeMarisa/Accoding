#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  int num;
  cin >> num;
  if (num < 1)
    cout << num;
  else if (num < 10)
    cout << 2 * num - 3;
  else
    cout << 3 * num - 5;
}