#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
struct rec {
  int length;
  int width;
  int area;
};
struct rec rectangle[3];
int main()
{
  int a, b;
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    cin >> a >> b;
    rectangle[i].length = max(a, b);
    rectangle[i].width  = min(a, b);
    rectangle[i].area   = a * b;
  }
  sort(rectangle, rectangle + 3, [](rec a, rec b) { return a.area > b.area; });
  // cout << rectangle[0].length << " " << rectangle[0].width << endl;
  if (((rectangle[1].length + rectangle[2].length) <= rectangle[0].length) &&
      (max(rectangle[1].width, rectangle[2].width) <= rectangle[0].width))
    ans = 1;
  if (((rectangle[1].length + rectangle[2].width) <= rectangle[0].length) &&
      (max(rectangle[1].width, rectangle[2].length) <= rectangle[0].width))
    ans = 1;
  if (((rectangle[1].width + rectangle[2].length) <= rectangle[0].length) &&
      (max(rectangle[1].length, rectangle[2].width) <= rectangle[0].width))
    ans = 1;
  if (((rectangle[1].width + rectangle[2].width) <= rectangle[0].length) &&
      (max(rectangle[1].length, rectangle[2].length) <= rectangle[0].width))
    ans = 1;
  if (((rectangle[1].length + rectangle[2].length) <= rectangle[0].width) &&
      (max(rectangle[1].width, rectangle[2].width) <= rectangle[0].length))
    ans = 1;
  if (((rectangle[1].length + rectangle[2].width) <= rectangle[0].width) &&
      (max(rectangle[1].width, rectangle[2].length) <= rectangle[0].length))
    ans = 1;
  if (((rectangle[1].width + rectangle[2].length) <= rectangle[0].width) &&
      (max(rectangle[1].length, rectangle[2].width) <= rectangle[0].length))
    ans = 1;
  if (((rectangle[1].width + rectangle[2].width) <= rectangle[0].width) &&
      (max(rectangle[1].length, rectangle[2].length) <= rectangle[0].length))
    ans = 1;
  cout << (ans ? "SIXSIXSIX!" : "GG!");
  return 0;
}