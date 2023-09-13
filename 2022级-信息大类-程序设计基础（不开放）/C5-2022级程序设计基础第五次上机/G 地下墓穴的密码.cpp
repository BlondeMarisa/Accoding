#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int l, a[12] = {1}, b[12] = {2}, c[12] = {3};
int sum = 0, cpf, dj;

int main()
{

    scanf("%d", &l);
    for (int i = 1; i <= l; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= l; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= l; i++)
    {
        scanf("%d", &c[i]);
    }

    for (int i = 1; i <= l; i++)
    {
        sum += (a[i] + b[i]) * (a[i] + b[i]);
        sum += (c[i] + b[i]) * (c[i] + b[i]);
        sum += (a[i] + c[i]) * (a[i] + c[i]);
        cpf += (a[i] - b[i]) * (a[i] - b[i]);
        cpf += (c[i] - b[i]) * (c[i] - b[i]);
        cpf += (a[i] - c[i]) * (a[i] - c[i]);
        dj += a[i] * b[i] + b[i] * c[i] + c[i] * a[i];
    }
    printf("%d %d %d", sum, cpf, dj);
    return 0;
}