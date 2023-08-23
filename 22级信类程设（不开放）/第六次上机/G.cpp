#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int bomb[503][503];
int main()
{
  int health, ability;
  cin >> health >> ability;
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> bomb[i][j];
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++)
  {
    int x, y;
    cin >> x >> y;
    int bomb_num = 0;
    for (int l = x - 1; l <= x + 1; l++)
      for (int u = y - 1; u <= y + 1; u++)
        if (bomb[l][u])
        {
          bomb_num++;
          bomb[l][u] = 0;
        }
    if (bomb_num > ability)
    {
      health -= (1 << bomb_num);
    }
    // 每次扫雷完成，判断是否输了
    if (health <= 0)
    {
      T = i;
      break;
    }
  }
  if (health <= 0)
  {
    puts("L0SE");
    printf("%d", T);
  }
  else
  {
    puts("WlN");
    printf("%d", health);
  }
  return 0;
}