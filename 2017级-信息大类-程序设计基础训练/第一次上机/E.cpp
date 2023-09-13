#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  string num;
  cin >> num;
  int identify = ((num[0] - '0') * 9 + (num[1] - '0') * 8 + (num[2] - '0') * 7 +
                  (num[3] - '0') * 6 + (num[4] - '0') * 5 + (num[5] - '0') * 4 +
                  (num[6] - '0') * 3 + (num[7] - '0') * 2) %
                 10;
  char id = identify + '0';
  num += id;
  cout << num;
}