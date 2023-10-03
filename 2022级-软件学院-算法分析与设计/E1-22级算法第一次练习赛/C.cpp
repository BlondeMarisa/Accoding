#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
list<int> q[100002];
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
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
      q[i].push_back(i);
    }
    while (t--)
    {
      int op;
      cin >> op;
      int x, y;
      switch (op)
      {
      case 1:
      {
        cin >> x >> y;
        q[x].splice(q[x].end(), q[y]);
        q[y].clear();
        break;
      }
      case 2:
      {
        cin >> x;
        auto it  = q[1].begin();
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
          it = find(q[i].begin(), q[i].end(), x);
          if (it != q[i].end()) // find
          {

            if (it == q[i].begin())
              flag = 1;
            it--;
            break;
          }
        }

        if (flag)
          cout << 0 << endl;
        else
          cout << *it << endl;
        break;
      }
      case 3:
      {
        cin >> x;
        auto it  = q[1].begin();
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
          it = find(q[i].begin(), q[i].end(), x);
          if (it != q[i].end())
          {
            it++;
            if ((it) == q[i].end())
              flag = 1;
            break;
          }
        }
        if (flag)
          cout << 0 << endl;
        else
          cout << *it << endl;
        break;
      }
      }
    }
  }
  return 0;
}