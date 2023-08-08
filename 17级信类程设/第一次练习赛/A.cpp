#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int a1 = abs(a), b1 = abs(b), c1 = abs(c);
    if(a1>=b1&&a1>=c1)cout<<a;
    else if(b1>=a1&&b1>=c1)cout<<b;
    else cout<<c;  
} 