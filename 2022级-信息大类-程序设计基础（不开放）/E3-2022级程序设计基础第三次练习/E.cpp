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
  stack<int> s;
  cin >> a >> b;
if(a==0||b==0){printf("0");return 0;}
  while (a && b) {
    s.push(min(a % 10, b % 10));
    a /= 10, b /= 10;
  }
  while ((s.size()!=1)&&(s.top() == 0)) {
    s.pop();
  }
  while (s.size()) {
    printf("%d", s.top());
    s.pop();
  }

  return 0;
}