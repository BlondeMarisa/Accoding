#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
void nym(int j)
{
    if (j == 0)
    {
        printf("{}");
    }
    else
    {
        printf("{");
        nym(0);
        for (int i = 1; i <= j - 1; i++)
        {
            printf(",");
            nym(i);
        }
        printf("}");
    }
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        nym(n);
        printf("\n");
    }

    return 0;
}