#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
using namespace std;
#define N 5000005
ll f;
int times[100005];
ll ans;
int nextRand()
{
  static unsigned int rnd_num = 0x80000001;
  static int mod              = 1e5 + 3; // 随机数为0-1e5+2

  rnd_num ^= rnd_num >> 10;
  rnd_num ^= rnd_num << 9;
  rnd_num ^= rnd_num >> 25;
  return rnd_num % mod;
}
int a[N];

void createA(int n)
{

  for (int i = 1; i <= n; i++)
  {
    a[i] = nextRand();
    times[a[i]]++;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  while (num--)
  {
    int len;
    cin >> len;
    createA(len);
    ll sum = 0;
    for (int i = 1; i <= 1e5 + 2; i++)
    {
      sum += times[i - 1];
      ll order = sum + 1;
      ans += i *order*times[i];
    }
    cout << ans << endl;
    ans = 0;
    memset(times, 0, sizeof(times));
  }

  return 0;
}