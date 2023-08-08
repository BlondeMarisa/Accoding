#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  double num;
  char c, temperature;
  cin >> c >> num >> c >> c >> temperature >> c;
  if (temperature == 'C')
    printf("<%d><C>=<%.1f><F>",(int)num, num * 9 / 5 + 32);
  else
    printf("<%d><F>=<%.1f><C>",(int)num, (num - 32) * 5 / 9);
}