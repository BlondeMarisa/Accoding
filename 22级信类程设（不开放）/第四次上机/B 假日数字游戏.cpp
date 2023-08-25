#include <stdio.h>
int main()
{
    unsigned long long a = 1, b = 1, n = 0, i;
    scanf("%lld", &n);
    for (i = 3; i <= n; i++)
    {
        b = (a + b) % 10;
        a = (b - a + 10) % 10;
    }
    printf("%lld\n", b % 10);
    return 0;
}