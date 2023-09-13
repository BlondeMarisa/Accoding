#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
bool isPrime(int n)
{
  if (n <= 1)
    return false;
  int i;
  if (n == 1)
    return false;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main()
{
  int num, n;
  cin >> num;
  for (int i = 0; i < num; i++) {
    cin >> n;
    if (isPrime(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}