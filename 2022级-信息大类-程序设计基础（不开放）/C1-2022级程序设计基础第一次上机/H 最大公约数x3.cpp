#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define eps 1e-10
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a, int b)
{
    int r;
    if (b == 0)
        return a < 0 ? -a : a;
    while ((r = a % b) != 0)
    {
        a = b;
        b = r;
    }
    return b < 0 ? -b : b;
}
int main()
{
    int a = 0, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", gcd(gcd(a, b), c));
    return 0;
}