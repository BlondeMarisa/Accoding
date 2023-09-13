#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int rise(const void *p1, const void *p2)
{
    long long *d1 = (long long *)p1; //转换为目标类型
    long long *d2 = (long long *)p2; //转换为目标类型
    if (*d1 < *d2)
        return -1; //根据大小返回值
    else if (*d1 > *d2)
        return 1;
    else
        return 0;
}
ll x[100002], y[100002], z[100002];
int main()
{
    int n = 0, zws;
    long long sum = 0, zwsx, zwsy, zwsz;
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%lld%lld%lld", &x[i], &y[i], &z[i]);
    }
    qsort(x, n, sizeof(long long), rise);
    qsort(y, n, sizeof(long long), rise);
    qsort(z, n, sizeof(long long), rise);

    if (n % 2 == 1)
    {
        zws = (n - 1) / 2;
        for (int j = 0; j <= n - 1; j++)
        {
            sum += (max(x[zws], x[j]) - min(x[zws], x[j]));
            sum += (max(y[zws], y[j]) - min(y[zws], y[j]));
            sum += (max(z[zws], z[j]) - min(z[zws], z[j]));
        }
        printf("%lld", sum);
    }
    else
    {
        zwsx = (x[n / 2 - 1] + x[n / 2]);
        zwsy = (y[n / 2 - 1] + y[n / 2]);
        zwsz = (z[n / 2 - 1] + z[n / 2]);
        // printf("%d %d %d\n", zwsx, zwsy, zwsz);
        for (int j = 0; j <= n - 1; j++)
        {
            sum += (max(zwsx, 2 * x[j]) - min(zwsx, 2 * x[j]));
            sum += (max(zwsy, 2 * y[j]) - min(zwsy, 2 * y[j]));
            sum += (max(zwsz, 2 * z[j]) - min(zwsz, 2 * z[j]));
        }
        printf("%lld", sum / 2);
    }
    return 0;
}