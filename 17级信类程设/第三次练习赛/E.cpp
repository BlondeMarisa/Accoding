#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
struct Point {
  double x;
  double y;
} Point[N];
double area(struct Point a, struct Point b, struct Point c)
{
  return abs((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y)) / 2;
}
double ans;
int main()
{
  int num;
  cin >> num;

  cin >> Point[0].x >> Point[0].y; // 顶点
  cin >> Point[1].x >> Point[1].y; // 第一个点
  for (int i = 2; i < num; i++) {
    cin >> Point[i].x >> Point[i].y;
    ans += area(Point[0], Point[i], Point[i - 1]);
  }
  printf("%.3lf", ans);
  return 0;
}