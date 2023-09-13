#include <bits/stdc++.h>
#define eps 1e-10
#define ll long long
#define PI acos(-1)
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MOD 100000007
using namespace std;
void PrintPrimeFactor(int n){
    int i = 2;
    while(n != 1){
        if(n % i == 0){
            cout << i << " ";
            n /= i;
        }
        else
            i++;
    }
}
int main(){
    int num;
    cin >> num;
    PrintPrimeFactor(num);
    return 0;
} 