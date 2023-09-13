#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
ll guisucheng(ll a, ll b, ll mod)//龟速乘 返回(a*b)%mod
{
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
  return ans;
}
int main(){
    ll num;
    cin >> num;
    ll ans = guisucheng(3, num, MOD);
    cout <<( (ans==MOD-1)?0:ans+1);
} 