//
// Created by Marisa on 2023/10/18.
//
#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MOD 100000007
#define N 100010
using namespace std;
ll p[N];
int main()
{
  int num;
  cin >> num;
  puts("n  : P(n)");
  //p[1]=1,p[2]=1,p[3]=2,p[4]=5;
  p[1] = 1, p[2] = 1;
  for(int i=3;i<=num;i++){
     ll sum=0;
     for(int j=1;j<=num-1;j++)sum+=(p[j]*p[i-j]);
     p[i]=sum;
  }
  for(int i=1;i<=num;i++){
    printf("%-3lld: %-3lld\n",i, p[i]);
  }
  return 0;
}