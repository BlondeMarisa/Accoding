#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
stack<char> ans;
char n[100];
int main()
{
  int num;
  cin >> num;
  while (num--)
  {
    int k1, k2;
    cin >> k1 >> k2;

    cin >> n;
    // puts(n);
    int length = strlen(n);
    ll tmp, ten_num = 0, weight = 1;
    for (int i = length - 1; i >= 0; i--)
    {

      if (isalpha(n[i]))
      {
        tmp = n[i] - 'A' + 10;
      }
      else
      {
        tmp = n[i] - '0';
      }
      ten_num += tmp * weight;
      weight *= k1;
      // printf("%d ", ten_num);
    }
    if (ten_num == 0)
    {
      printf("0\n");
      continue;
    }
    // 整除取余，顺次倒写
    while (ten_num != 0)
    {
      ll rest;

      if (ten_num % k2 < 0) // 出现负余数
      {
        rest    = ten_num % k2 - k2;
        ten_num = ten_num / k2 + 1;
      }
      else
      {

        rest = ten_num % k2;
        ten_num /= k2;
      }
      // rest入栈，最后倒序输出
      if (rest <= 9)
      {
        rest += '0';
      }
      else
      {
        rest = rest - 10 + 'A';
      }
      ans.push((char)rest);
    }
    while (ans.size())
    {
      cout << ans.top();
      ans.pop();
    }

    puts("");
  }
  // printf("%d", -5 % -2);
  return 0;
}
