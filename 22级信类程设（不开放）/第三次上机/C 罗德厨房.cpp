#include <stdio.h>
int main()
{
    int N = 0, yj = 0, zhihouzongjia = 0, ans = 0, after = 0;
    scanf("%d\n", &N);
    int x[24];
    for (int i = 0; i < N; i++)
    {
        scanf("%d\n", &x[i]);
        yj += x[i];
        after = x[i] & (~(1 << 2)); //第三位设为0
        after = after | 1;          //第一位设为1
        zhihouzongjia += after;
    }

    ans = yj - zhihouzongjia;
    printf("%d", ans);
    return 0;
}