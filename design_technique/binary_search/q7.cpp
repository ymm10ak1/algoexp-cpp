// 貯金(2)
// NOTE: 解けなかったため解説見た
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

ll f(ll x){
    // 1からxまでの総和
    return x*(x+1)/2;
}

ll binary_search(ll key){
    ll left = -1, right = 2e9;
    while(right-left > 1){
        ll mid = left+(right-left)/2;
        if(f(mid) >= key) right = mid;
        else left = mid;
    }
    return right;
}

int main(){
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    rep(i, n){
        ll d = binary_search(x[i]);
        printf("%lld\n", d);
    }
    return 0;
}