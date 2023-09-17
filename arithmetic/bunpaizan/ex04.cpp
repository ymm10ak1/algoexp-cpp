// 分配算 問題4
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    // x = Ky+A -> x+y = B -> Ky+A+y = B -> (K+1)y = B-A -> y = (B-A)/(K+1)
    // x = K*((B-A)/(K+1))+A
    if((b-a)%(k+1) != 0 || a > b) cout << -1 << endl;
    else cout << k*((b-a)/(k+1))+a << endl;
    return 0;
}