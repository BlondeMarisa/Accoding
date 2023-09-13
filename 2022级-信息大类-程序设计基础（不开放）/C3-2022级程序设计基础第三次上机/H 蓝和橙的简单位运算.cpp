#include <stdio.h>
int main()
{
    unsigned num = 0, n = 0, key = 0;
    while (scanf("%u%u%u", &num, &n, &key) != EOF)
    {
        num &= ~(((1 << 4) - 1) << n);
        num |= (key << n);
        printf("%u\n", num);
    }

    return 0;
}