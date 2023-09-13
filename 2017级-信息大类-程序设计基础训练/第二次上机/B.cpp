#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  int type;
  double gpa;
  int grade[6];
  cin >> type >> gpa;
  if (type == 1) {
    if (gpa >= 3.5) {
      puts("APPROVED");
      return 0;
    }
    for (int i = 0; i < 6; i++)
      cin >> grade[i];
    if (grade[0] + grade[1] + grade[2] >= 240 &&
        grade[3] + grade[4] + grade[5] >= 240) {
      puts("APPROVED");
      return 0;
    }

  } else {
    if (gpa >= 3.6) {
      puts("APPROVED");
      return 0;
    }
    for (int i = 0; i < 6; i++)
      cin >> grade[i];
    if (grade[0] + grade[1] + grade[2] > 255 &&
        grade[3] + grade[4] + grade[5] > 255) {
      puts("APPROVED");
      return 0;
    }
  }
  puts("REJECTED");
  return 0;
}