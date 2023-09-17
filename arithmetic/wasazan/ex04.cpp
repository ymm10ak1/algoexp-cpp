// 和差算 問題4
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    // x+y = a, x-y=b -> 2x = a+b -> x = (a+b)/2
    if((a+b)%2 == 0) cout << (a+b)/2 << endl;
    else cout << -1 << endl;
    return 0;
}