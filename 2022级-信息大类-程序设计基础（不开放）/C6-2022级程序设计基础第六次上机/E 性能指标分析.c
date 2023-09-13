#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010

struct product
{
  int id;
  int weight;
  int rank;
} Pro[1010];
typedef struct product Product;
int cmp(const void *p1, const void *p2)
{
  Product *a = (Product *)p1;
  Product *b = (Product *)p2;
  if ((*a).id == (*b).id)
    return (*a).weight < (*b).weight;
  else
    return (*a).id > (*b).id;
}
int main()
{
  int num;
  scanf("%d", &num);
  int id, weight;
  for (int i = 0; i < num; i++)
  {
    scanf("%d%d", &Pro[i].id, &Pro[i].weight);

    Pro[i].rank = i + 1;
  }
  qsort(Pro, num, sizeof(Pro[0]), cmp);

  Pro[0].rank = 1;
  printf("%d %d %d\n", Pro[0].rank, Pro[0].id, Pro[0].weight);

  for (int i = 1; i < num; i++)
  {
    if ((Pro[i].id == Pro[i - 1].id) && (Pro[i].weight == Pro[i - 1].weight))
      Pro[i].rank = Pro[i - 1].rank;
    else
      Pro[i].rank = i + 1;
    printf("%d %d %d\n", Pro[i].rank, Pro[i].id, Pro[i].weight);
  }
  return 0;
}