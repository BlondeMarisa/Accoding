#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  double ans;
  int sumwaittime = 0;
  int clock       = 0;
  int intime, remain;
  int used = 1;
  int num  = 0;
  while (scanf("%d", &intime) != EOF) {
    int waittime = 0;
    if (intime != -1) {
      scanf("%d", &remain);
      num++;
    } else
      break;
    if (intime >= clock) {

      waittime = remain;
      clock += (remain + intime - clock);
    } else {

      waittime = (remain + clock - intime);
      clock += remain;
    }
    sumwaittime += waittime;
   // cout << intime << " " << remain << " " << clock << " " << waittime << endl;
  }
  ans = sumwaittime / (double)num;
  printf("%.2lf\n", ans);
  return 0;
}