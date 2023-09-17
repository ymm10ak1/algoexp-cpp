// 分配算 問題2
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a;
    cin >> a;
    if(a%3 == 0) cout << a/3*2 << endl;
    else cout << -1 << endl;
    return 0;
}