// 和差算 問題5
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    if((a+b)%2 != 0 || a < b) cout << -1 << endl;
    else cout << (a+b)/2 << endl;
    return 0;
}