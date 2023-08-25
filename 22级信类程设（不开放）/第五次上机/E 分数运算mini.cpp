#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
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
    int n = 0, a[23], b[23], fenmu = 1, sum = 0, fenzi = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d/%d", &a[i], &b[i]);
        fenmu = fenmu * b[i] / gcd(fenmu, b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * (fenmu / b[i]);
        fenzi += a[i];
    }
    if (fenzi < fenmu || ((fenzi > fenmu) && (fenzi % fenmu != 0)))
    {
        printf("%d/%d", fenzi / gcd(fenzi, fenmu), fenmu / gcd(fenzi, fenmu));
    }
    else
        printf("%d", fenzi / fenmu);
    return 0;
}
