#include <bits/stdc++.h>
#include <iostream>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
char op;
ll ans;
char expression[5][160];
void ConvertSpaceToEmpty()
{
  for (int i = 0; i < 5; i++)
  {

    for (int j = 0; expression[i][j]; j++)
    {
      if (expression[i][j] != 'x')
        expression[i][j] = 0;
    }
  }
}
bool isEmptyLine(int line)
{
  int flag = 1;
  for (int i = 0; i < 5; i++)
  {
    if (expression[i][line])
      flag = 0;
  }
  return flag;
}
bool isFullLine(int line)
{
  int flag = 1;
  for (int i = 0; i < 5; i++)
  {
    if (!expression[i][line])
      flag = 0;
  }
  return flag;
}
bool isFullRow(int row, int line)
{
  int flag = 0;
  if (expression[row][line] && expression[row][line + 1] &&
      expression[row][line + 2])
    flag = 1;
  return flag;
}
bool isadd(int line)
{
  int flag = 0;
  if (isFullRow(2, line) && expression[1][line + 1] && expression[3][line + 1])
    flag = 1;
  return flag;
}
bool isminus(int line)
{
  int flag = 0;

  if (isFullRow(2, line) && (!expression[1][line + 1]) &&
      (!expression[3][line + 1] && (!expression[0][line])))
    flag = 1;

  return flag;
}
bool is0(int line)
{
  int flag = 0;
  if (isFullLine(line) && isFullLine(line + 2) && expression[0][line + 1] &&
      expression[4][line + 1] && (!expression[2][line + 1]))
    flag = 1;
  return flag;
}
bool is1(int line)
{
  int flag = 0;
  if (isFullLine(line) && isEmptyLine(line + 1))
    flag = 1;
  return flag;
}
bool is2(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      expression[1][line + 2] && expression[3][line] &&
      (!expression[1][line]) && (!expression[3][line + 2]))
    flag = 1;
  return flag;
}
bool is3(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      isFullLine(line + 2) && (!expression[1][line]) && (!expression[3][line]))
    flag = 1;
  return flag;
}
bool is4(int line)
{
  int flag = 0;
  if (isFullRow(2, line) && isFullLine(line + 2) && expression[0][line] &&
      expression[1][line] && (!expression[0][line + 1]))
    flag = 1;
  return flag;
}
bool is5(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      expression[3][line + 2] && expression[1][line] &&
      (!expression[3][line]) && (!expression[1][line + 2]))
    flag = 1;
  return flag;
}
bool is6(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      expression[3][line + 2] && isFullLine(line) && (!expression[1][line + 2]))
    flag = 1;
  return flag;
}
bool is7(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullLine(line + 2) && (!expression[4][line + 1]))
    flag = 1;
  return flag;
}
bool is8(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      isFullLine(line + 2) && isFullLine(line))
    flag = 1;
  return flag;
}
bool is9(int line)
{
  int flag = 0;
  if (isFullRow(0, line) && isFullRow(2, line) && isFullRow(4, line) &&
      isFullLine(line + 2) && expression[1][line] && (!expression[3][line]))
    flag = 1;
  return flag;
}
int judge(int line)
{
  if (is0(line))
    return 0;
  if (is1(line))
    return 1;
  if (is2(line))
    return 2;
  if (is3(line))
    return 3;
  if (is4(line))
    return 4;
  if (is5(line))
    return 5;
  if (is6(line))
    return 6;
  if (is7(line))
    return 7;
  if (is8(line))
    return 8;
  if (is9(line))
    return 9;
  if (isadd(line))
    return 10;
  if (isminus(line))
    return 11;
  if (isEmptyLine(line))
    return 12;
  return 0;
}
string calculate;
int main()
{
  for (int i = 0; i < 5; i++)
  {
    cin.getline(expression[i], 160);

    // puts(expression[i]);
  }
  ConvertSpaceToEmpty();

  int i = 0;
  while (judge(i) == 12)
  {
    i++;
  }
  ans = judge(i);
  if (ans == 1)
    i++;
  else
    i += 3;
  if (ans >= 0 && ans <= 9)
    calculate += ans + '0';
  else if (ans == 10)
    calculate += '+';
  else if (ans == 11)
    calculate += '-';
  for (; i <= 156;)
  {
    int judgeans = judge(i);
    if (judgeans == 12)
    {
      i++;
      continue;
    }
    else if (judgeans == 10)
    {
      op = 1; //+
      i += 3;
      calculate += '+';
      continue;
    }
    else if (judgeans == 11)
    {
      op = 2; //-
      i += 3;
      calculate += '-';
      continue;
    }
    else if ((judgeans >= 0) && (judgeans <= 9))
    {
      if (op == 1)
      {
        ans += judgeans;
      }
      if (op == 2)
      {
        ans -= judgeans;
      }

      calculate += judgeans + '0';

      if (judgeans == 1)
      {
        i++;
        continue;
      }
      else
      {
        i += 3;
        continue;
      }
    }
  }
  //  puts(calculate.c_str());
  stringstream cal(calculate);
  int num;
  cal >> ans;
  while (cal >> op)
  {
    cal >> num;
    if (op == '+')
      ans += num;
    if (op == '-')
      ans -= num;
  }
  printf("%lld", ans);
  return 0;
}