#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main()
{
  int sum;
  for (int i = 6; i < 1000; i++) {
    sum = 0;
    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i)
      cout << i << endl;
  }
  return 0;
}