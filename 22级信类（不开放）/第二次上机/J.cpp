#include <bits/stdc++.h>
#include <ctype.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
int main()
{
  int num;
  char s[300];

  scanf("%d", &num);
  cin.getline(s, 300);
  while (num--) {
    cin.getline(s, 300);
    s[0]    = toupper(s[0]);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
      if (!isalnum(s[i])) {
        s[i + 1] = toupper(s[i + 1]);
      }
    }
    puts(s);
  }

  return 0;
}
//哈哈，读入一个数之后记得吸一下换行符啊！