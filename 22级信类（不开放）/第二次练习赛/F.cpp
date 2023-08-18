#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int a, b;
  int tmpa, tmpb;
  int weighta = 1, weightb = 1;
  cin >> a >> b;
  int backup_b = b;
  int rightans = a * b;
  while (a) {
    tmpa = a % 10;
    while (b) {
      tmpb = b % 10;
      if (tmpa == 5) {
        if (tmpb == 8) {
          rightans -= 5 * weighta * weightb;
        }
      }
      if (tmpa == 8) {
        if (tmpb == 5) {
          rightans -= 5 * weighta * weightb;
        }
      }

      weightb *= 10;
      b /= 10;
    }
    weighta *= 10;
    a /= 10;
    b       = backup_b;
    weightb = 1;
  }
  cout << rightans;
  return 0;
}