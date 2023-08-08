#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
string substr1 = "tls";
string substr2 = "lls";
string substr3 = "lzy";
int cnt1, cnt2, cnt3;
int main()
{
  string a;
  cin >> a;
  int pos = 0;
  while (a.find(substr1, pos) != -1) {
    cnt1++;
    pos = a.find(substr1, pos) + 3;
  }
  pos = 0;
  while (a.find(substr2, pos) != -1) {
    cnt2++;
    pos = a.find(substr2, pos) +3;
  }
  pos = 0;
  while (a.find(substr3, pos) != -1) {
    cnt3++;
    pos = a.find(substr3, pos) + 3;
  }
 // cout << cnt1 << endl << cnt2 << endl << cnt3 << endl;
  if (cnt1 + cnt2 + cnt3 == 1)
    puts("YES");
  else
    puts("NO");

  return 0;
}