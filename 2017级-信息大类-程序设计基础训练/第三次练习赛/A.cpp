#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N];
bool isTriNum(int a, int b, int c)
{
  if (a < b && c < b)
    return true;
  else
    return false;
}
int main()
{
  int num, flag = 0;
  cin >> num;
  cin >> a[1] >> a[2];
  for (int i = 3; i <= num; i++) {
    cin >> a[i];
    if (isTriNum(a[i - 2], a[i - 1], a[i])) {
      cout << a[i - 2] << ' ' << a[i - 1] << ' ' << a[i] << endl;
      flag = 1;
    }
  }
  if (!flag)
    cout << "tan90";
  return 0;
}