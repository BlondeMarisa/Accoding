#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int geweizhihe(int n)
{
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main()
{
  int num, n;
  cin >> num;
  for (int i = 0; i < num; i++) {
    cin >> n;
    cout << geweizhihe(n) << endl;
  }
  return 0;
}