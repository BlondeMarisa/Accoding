#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int a[N];
int main()
{
  int sum = 0, cnt = 0, failnum = 0;
  double avg = 0;
  int num;
  while (1)
  {
    cin >> num;
    if (num == -1)
      break;
    if (num < 60)
      failnum++;
    cnt++;
    sum += num;
  }
  printf("Average:%d\nFailed:%d", sum / cnt, failnum);
  return 0;
}