#include <stdio.h>
#include <string.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
int times[5010];
int main()
{

  int num;
  scanf("%d", &num);
  int num_a, num_b, tmp;

  while (num--) {
    scanf("%d", &num_a);
    for (int i = 0; i < num_a; i++) {
      scanf("%d", &tmp);
      times[tmp]++;
    }

    scanf("%d", &num_b);
    for (int i = 0; i < num_b; i++) {
      scanf("%d", &tmp);
      times[tmp]++;
    }

    for (int i = 0; i < 5010; i++) {
      // printf("%d:%d %d\n", i, a[i], b[i]);
      if (times[i] == 1)
        printf("%d ", i);
    }
    puts("");
    memset(times, 0, 5010*sizeof(int));
  }

  return 0;
}