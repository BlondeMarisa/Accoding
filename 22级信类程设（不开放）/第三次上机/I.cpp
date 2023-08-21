#include <stdio.h>
#include <string.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

int main()
{
  char a[15], b[15];
  scanf("%s%s", a, b);
  int a_num, b_num;
  if (sscanf(a, "-%d", &a_num))
    a_num = ~a_num;
  else
    sscanf(a, "%d", &a_num);
  if (sscanf(b, "-%d", &b_num))
    b_num = ~b_num;
  else
    sscanf(b, "%d", &b_num);
  // printf("%d %d\n", a_num, b_num);
  if ((a_num & b_num) < 0)
    printf("-%d\n", ~(a_num & b_num));
  else
    printf("%d\n", a_num & b_num);
  if ((a_num | b_num) < 0)
    printf("-%d\n", ~(a_num | b_num));
  else
    printf("%d\n", a_num | b_num);
  if ((a_num ^ b_num) < 0)
    printf("-%d\n", ~(a_num ^ b_num));
  else
    printf("%d\n", a_num ^ b_num);
  // printf("%d\n%d\n%d", a_num & b_num, a_num | b_num, a_num ^ b_num);
  return 0;
}