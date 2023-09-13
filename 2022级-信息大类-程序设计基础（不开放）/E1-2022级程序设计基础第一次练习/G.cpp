#include <bits/stdc++.h>
#include <cctype>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
char tmp;
int times = 1;
int main()
{
  int num;
  cin >> num;
  getchar();
  while (num--) {
    tmp = getchar();
    if (!isalnum(tmp))
      puts("? *&\\! _//\\a@\\\\\\r\\n! //\\\\\"_\"/\\\\^! ~zZ");
    else if (isdigit(tmp)) {
      times = tmp - '0';
    } else if (islower(tmp)) {
      tmp = toupper(tmp);

      for (int i = 0; i < times; i++) {

        putchar(tmp);
      }
      times = 1;

      puts("");
    } else if (isupper(tmp)) {
      tmp = tolower(tmp);

      for (int i = 0; i < times; i++) {
        putchar(tmp);
      }
      times = 1;

      puts("");
    }
  }

  return 0;
}