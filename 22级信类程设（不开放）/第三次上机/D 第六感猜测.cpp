#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, zqd = 0;
    scanf("%d%d%d%d%d\n%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &y1, &y2, &y3, &y4, &y5);

    if (abs(x1 - y1) > 100)
    {
        zqd -= 1;
    }
    else if (abs(x1 - y1) == 100)
    {
        zqd += 1;
    }
    else
    {
        zqd += 3;
    }

    if (abs(x2 - y2) > 100)
    {
        zqd -= 1;
    }
    else if (abs(x2 - y2) == 100)
    {
        zqd += 1;
    }
    else
    {
        zqd += 3;
    }
    if (abs(x3 - y3) > 100)
    {
        zqd -= 1;
    }
    else if (abs(x3 - y3) == 100)
    {
        zqd += 1;
    }
    else
    {
        zqd += 3;
    }
    if (abs(x4 - y4) > 100)
    {
        zqd -= 1;
    }
    else if (abs(x4 - y4) == 100)
    {
        zqd += 1;
    }
    else
    {
        zqd += 3;
    }
    if (abs(x5 - y5) > 100)
    {
        zqd -= 1;
    }
    else if (abs(x5 - y5) == 100)
    {
        zqd += 1;
    }
    else
    {
        zqd += 3;
    }

    printf("%d", zqd);
    return 0;
}