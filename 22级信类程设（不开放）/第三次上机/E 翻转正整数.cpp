#include <stdio.h>
int main()
{
    unsigned int a, ans, q16, h16;

    scanf("%u", &a);
    q16 = a & 0xffff0000;
    h16 = a & 0x0000ffff;
    h16 <<= 16;
    q16 >>= 16;
    ans = q16 | h16;
    printf("%u", ans);
    return 0;
}