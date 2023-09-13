#include <stdio.h>
int main()
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    if (n % 2 ) {
      printf("‐1\n");
    } else {
      printf("%d 0 0\n", n / 2);
    }
  }
  return 0;
}