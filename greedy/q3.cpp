// コイン問題
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int x;
    int a[4];
    cin >> x;
    rep(i, 4) cin >> a[i];
    int cnt = 0;
    int coin[4] = {50, 10, 5, 1};
    rep(i, 4){
        if(x%coin[i] == x) continue;
        int d = min(x/coin[i], a[i]);
        cnt += d;
        x -= coin[i]*d;
    }
    cout << cnt << endl;
    return 0;
}