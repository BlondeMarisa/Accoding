#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 1000010
using namespace std;
int a[N], tmp[N];
ll merge_sort(int l, int r)
{
  if (l >= r)
    return 0;
  int mid = l + r >> 1;
  ll ans  = 0;
  ans += merge_sort(l, mid);
  ans += merge_sort(mid + 1, r);
  // 逆序对定义是：左边的数大于右边的数。由于两个数组都是有序的，
  // 因此当左边的指针所指数大于右边的指针所指数时，左边剩余的数都大于右边的数
  // 因此逆序对的数量为mid - i + 1。
  int i = l, j = mid + 1, k = 0;
  while ((i <= mid) && (j <= r))
  {
    if (a[i] <= a[j])
      tmp[k++] = a[i++];
    else
    {
      tmp[k++] = a[j++];
      ans += mid - i + 1;
    }
  }
  while (i <= mid)
    tmp[k++] = a[i++];
  while (j <= r)
    tmp[k++] = a[j++];
  for (int i = 0; i < k; i++)
    a[l++] = tmp[i];
  return ans;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
      scanf("%d", &a[i]);
    ll ans = merge_sort(0, num - 1);
    printf("%lld\n", ans);
    // for (int i = 0; i < num; i++)
    //   printf("%d ", a[i]);
  }

  return 0;
}