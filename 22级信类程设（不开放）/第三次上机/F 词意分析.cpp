#include <stdio.h>
int main()
{
    unsigned a = 0, b = 0, m = 0, i = 0;
    int n = 0, c[34] = {0}, d[34] = {0};
    scanf("%d", &n);
    while (scanf("%u%u", &a, &b) != EOF)
    {
        for (i = 0; i < 31; i++)
        {
            c[i] = ((a >> i) & 1);
            d[i] = ((b >> i) & 1);
            m += (c[i] - d[i]) * (c[i] - d[i]);
        }
        printf("%u\n", m);
        m = 0;
        for (i = 0; i < 36; i++)
        {
            c[i] = 0;
            d[i] = 0;
        }
    }
    return 0;
}