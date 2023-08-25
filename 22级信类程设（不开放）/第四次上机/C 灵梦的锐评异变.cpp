#include <stdio.h>
int main()
{
    int n = 0, ln = 0, extra = 0, hard = 0, easy = 0, normal = 0;
    while (~scanf("%d", &n))
    {
        switch (n / 10)
        {
        case 9:

        case 10:
            ln += 1;
            printf("Lunatic\n");
            break;
        case 8:
            extra += 1;
            printf("Extra\n");
            break;
        case 7:
            hard += 1;
            printf("Hard\n");
            break;
        case 6:
            normal += 1;
            printf("Normal\n");
            break;
        default:
            easy += 1;
            printf("Easy\n");
            break;
        }
    }
    printf("%d %d %d %d %d", ln, extra, hard, normal, easy);
    return 0;
}