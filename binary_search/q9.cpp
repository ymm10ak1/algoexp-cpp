// 九九の表(1)
// NOTE: 解けなかったため解説見た
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    rep(i, n){
        ans += min(n, k/(i+1));
    }
    printf("%lld", ans);
    return 0;
}