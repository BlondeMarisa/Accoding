#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int Zeller(int year, int month, int day)
{
  if (month == 1 || month == 2) // 判断month是否为1或2　
    year--, month += 12;
  int c    = year / 100;
  int y    = year - c * 100;
  int week = y + y / 4 + c / 4 - 2 * c + 26 * (month + 1) / 10 + day - 1;
  while (week < 0)
    week += 7;
  week %= 7;
  if (week == 0) {
    week += 7;
  }
  return week;
}
int main()
{
  int num, year, month, day;
  cin >> num;
  while (num--) {
    cin >> year >> month >> day;
    cout << Zeller(year, month, day) << endl;
  }
  return 0;
}