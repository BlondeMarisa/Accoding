#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define arraynum(x) sizeof(x) / sizeof(x[0])
#define PI acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    char c;
    int da = 0, xiao = 0, num = 0;
    while (scanf("%c", &c) != EOF)
    {
        if ('a' <= c && c <= 'z')
        {
            xiao += 1;
        }
        if ('A' <= c && c <= 'Z')
        {
            da += 1;
        }
        if ('0' <= c && c <= '9')
        {
            num += 1;
        }
    }
    printf("%d %d %d", num, xiao, da);
    return 0;
}