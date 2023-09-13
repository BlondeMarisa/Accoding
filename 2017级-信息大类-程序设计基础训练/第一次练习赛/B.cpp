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
  map<int, string> mp;
  mp[1]  = "January";
  mp[2]  = "February";
  mp[3]  = "March";
  mp[4]  = "April";
  mp[5]  = "May";
  mp[6]  = "June";
  mp[7]  = "July";
  mp[8]  = "August";
  mp[9]  = "September";
  mp[10] = "October";
  mp[11] = "November";
  mp[12] = "December";
  if (mp.find(num) != mp.end())
    cout << mp[num];
  else
    cout << "Wrong month";
}