#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
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
  return week;
}
bool RunYear(int y)
{
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    return true;
  else
    return false;
}
int calendar[8][8];
int main()
{
  int year, month;
  cin >> year >> month;
  puts(" Sun Mon Tue Wed Thu Fri Sat");
  map<int, int> month_day;
  month_day[1]  = 31;
  month_day[2]  = 28;
  month_day[3]  = 31;
  month_day[4]  = 30;
  month_day[5]  = 31;
  month_day[6]  = 30;
  month_day[7]  = 31;
  month_day[8]  = 31;
  month_day[9]  = 30;
  month_day[10] = 31;
  month_day[11] = 30;
  month_day[12] = 31;
  if (RunYear(year))
    month_day[2] = 29;
  int week = Zeller(year, month, 1);
  for (int i = 1; i <= month_day[month]; i++) {
    calendar[(i + week - 1) / 7][(i + week - 1) % 7] = i;
  }
  for (int i = 0; i <= 6; i++) {
    for (int j = 0; j <= 6; j++) {
      if (calendar[i][j] == 0)
        cout << "    ";
      else
        cout << setw(4) << calendar[i][j];
    }
    cout << endl;
  }
  return 0;
}