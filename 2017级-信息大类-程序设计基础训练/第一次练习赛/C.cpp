#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  int n1, n2, n3, n4, n5;
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  if (n1 < n2 && n2 < n3 && n3 > n4 && n4 > n5)
    cout << "Yes";
  else
    cout << "No";
}