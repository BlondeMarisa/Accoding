#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 1e7 + 7
#define N 10010
using namespace std;
int bound[300];
int sum;
int main()
{
  for (int i = 1; i < 150; i++) {
    bound[i] = i * (i + 1) / 2;
  }
  int num;
  cin >> num;
auto n = lower_bound(&bound[1], &bound[150], num) - &bound[1] + 1;
  // cout << n << endl;
  sum = n * (n + 1) * (2 * n + 1) / 6 - (n) * (n * (n + 1) / 2 - num);
  cout << sum;
  return 0;
}