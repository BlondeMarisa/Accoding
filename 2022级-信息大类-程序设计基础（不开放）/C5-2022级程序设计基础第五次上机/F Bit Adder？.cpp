#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int f(ll b)
{
    int sum = 0;
    for (int i = 0; b != 0; i++)
    {
        if ((b & 1) == 1)
        {
            sum += i;
        }
        b >>= 1;
    }
    return sum;
}
int main()
{
    ll n = 0;
    int k;
    scanf("%lld%d", &n, &k);
    while (k--)
    {
        n = f(n);
    }
    printf("%lld", n);
    return 0;
}