#include <stdio.h>

int main()
{
    int sum = 0, sdzs = 0, pingjun = 0, n = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        sum = sum + n;
        sdzs = sdzs + 1;
    }
    pingjun = sum / sdzs;
    printf("%d %d %d", sum, sdzs, pingjun);

    return 0;
}