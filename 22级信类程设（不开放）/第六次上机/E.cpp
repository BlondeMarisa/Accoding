#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;

struct product
{
  int id;
  int weight;
  int rank;
} Pro[1010];
bool cmp(product a, product b)
{
  if (a.id == b.id)
    return a.weight > b.weight;
  else
    return a.id < b.id;
}
int main()
{
  int num;
  cin >> num;
  int id, weight;
  for (int i = 0; i < num; i++)
  {
    cin >> Pro[i].id >> Pro[i].weight;
    Pro[i].rank = i + 1;
  }
  sort(Pro, Pro + num, cmp);
  Pro[0].rank = 1;
  cout << Pro[0].rank << ' ' << Pro[0].id << ' ' << Pro[0].weight << endl;
  for (int i = 1; i < num; i++)
  {
    if ((Pro[i].id == Pro[i - 1].id) && (Pro[i].weight == Pro[i - 1].weight))
      Pro[i].rank = Pro[i - 1].rank;
    else
      Pro[i].rank = i + 1;
    cout << Pro[i].rank << ' ' << Pro[i].id << ' ' << Pro[i].weight << endl;
  }
  return 0;
}