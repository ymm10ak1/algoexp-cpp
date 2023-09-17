// 和差算 問題2
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a;
    cin >> a;
    int ans = -1;
    if(a%2 == 0){
        ans = a/2;
    }
    cout << ans << endl;
    return 0;
}