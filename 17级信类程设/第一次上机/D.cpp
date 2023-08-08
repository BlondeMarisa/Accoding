#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
using namespace std;
int main()
{
  int num;
  cin >> num;

  int h4w = num % 10000;
  int h3w = num % 1000;
  int h2w = num % 100;
  int qian = num - h4w;

  int thousand_after = num % 10;//原来的个位
  int hundred_after=(h2w-thousand_after)/10;//原来的十位
  int ten_after=(h3w-h2w)/100;//原来的百位
  int num_after=(h4w-h3w)/1000;//原来的千位
  int ans            = qian + thousand_after * 1000 + hundred_after * 100 +
            ten_after * 10 + num_after;
  cout<<ans;
  }