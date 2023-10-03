#include <bits/stdc++.h>
#include <cstddef>
#include <queue>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 200010
using namespace std;
int a[N];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;

  while (num--)
  {
    int n;
    cin >> n;
    priority_queue<int> q;//注意创建时是空队列
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      q.push(a[i]);
    }
    int a = q.top();
    // cout << a << endl;
    q.pop();
    int ans = a + q.top();

    cout << ans << endl;
   
  }
  return 0;
}