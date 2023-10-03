#include <bits/stdc++.h>
using namespace std;
char s1[2005], s2[2005];    // 存放两个大整数的字符
int int1[2005], int2[2005]; // 按低位到高位存放两个大整数的数组
int result[4000005];        // 乘积结果数组 ,按低位到高位存放
int i, j;                   // 循环变量
int d;                      // 进位
int b;                      // 存放按位乘的结果
int m;                      // 结果数组的下标
int len_result;
int main()
{

  int num;
  cin >> num;
  while (num--)
  {
    // 获取两个大整数
    scanf("%s%s", s1, s2);
    // 按低位到高位存放两个大整数
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (i = 0, j = len1 - 1; i < len1; i++, j--)
    {
      int1[j] = s1[i] - '0';
    }
    for (i = 0, j = len2 - 1; i < len2; i++, j--)
    {
      int2[j] = s2[i] - '0';
    }
    // char字符数组长度等于对应的int字符数组长度
    // 模拟竖式相乘
    for (i = 0; i < len2; i++)
    {
      d = 0; // 一开始相乘,进位为0
      m = i;
      for (j = 0; j < len1; j++)
      {
        b         = int2[i] * int1[j] + d + result[m];
        result[m] = b % 10; // 本位
        m++;                // 为下一次做准备
        d = b / 10;         // 进位
      }
      if (d > 0)
      { // 一次相乘，最后一次的进位
        result[m] = d;
      }
    }
    // 输出结果
    len_result = len1 + len2;
    while (result[len_result] == 0 && len_result > 0)
    { // 删除前导符0
      len_result--;
    }
    for (i = len_result; i >= 0; i--)
    {
      printf("%d", result[i]);
    }
    puts("");

    // 清空
    {
      memset(int1, 0, sizeof(int1));
      memset(int2, 0, sizeof(int2));
      memset(result, 0, sizeof(result));
    }
  }

  return 0;
}