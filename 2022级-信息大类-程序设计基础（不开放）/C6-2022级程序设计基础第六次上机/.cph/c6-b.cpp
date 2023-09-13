#include <math.h>
#include <stdio.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int a[100000], b[100000];
int main()
{
    int n, k, t = 0;
    scanf("%d%d%d", &k, &n, &t);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j <= t - 1; j++)
    {
        scanf("%d", &b[j]);
        printf("%d ", a[b[j]]);
    }
    return 0;
}