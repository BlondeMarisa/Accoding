#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
// h[N]存储堆中的值, h[1]是堆顶，x的左儿子是2x, 右儿子是2x + 1
// ph[k]存储第k个插入的点在堆中的位置
// hp[k]存储堆中下标是k的点是第几个插入的
int h[N], ph[N], hp[N], Size = N,len;

// 交换两个点，及其映射关系
void heap_swap(int a, int b)
{
  swap(ph[hp[a]], ph[hp[b]]);
  swap(hp[a], hp[b]);
  swap(h[a], h[b]);
}

void down(int u)
{
  int t = u;
  if (u * 2 <= Size && h[u * 2] < h[t])
    t = u * 2;
  if (u * 2 + 1 <= Size && h[u * 2 + 1] < h[t])
    t = u * 2 + 1;
  if (u != t)
  {
    heap_swap(u, t);
    down(t);
  }
}

void up(int u)
{
  while (u / 2 && h[u] < h[u / 2])
  {
    heap_swap(u, u / 2);
    u >>= 1;
  }
}

int a[N];
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
      int op;
      cin >> op;
      switch (op)
      {
      case 1:
      {
        int x;
        cin >> x;
        h[++len] = x;
        up(len);
        break;
      }
      case 2://delete
      {

        break;
      }
      case 3://query
      {
        break;
      }
      }
    }
  
  for (int i = 1; h[i]; i++)
    cout << h[i] << ' ';
  return 0;
}