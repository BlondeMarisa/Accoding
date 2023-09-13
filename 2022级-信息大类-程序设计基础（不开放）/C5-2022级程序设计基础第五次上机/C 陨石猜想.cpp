#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int f(int x)
{

    if (x % 4 == 0)
    {
        return x / 2;
    }
    else
        return (x + x % 10 + 2);
}
int main()
{
    int x = 0;
    scanf("%d", &x);
    if (x < 10)
    {
        printf("End");
        return 0;
    }
    else
    {
        printf("%d\n", f(x));
        while (f(x) >= 10)
        {
            x = f(x);
            printf("%d\n", f(x));
        }
    }
    printf("End");
    return 0;
}