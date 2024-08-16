// もう一つのナップサック問題
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = (int)(n)-1; i >= (int)(s); --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

ll dp[105][10005];

template <typename T>
void chmin(T& a, T b){
    if(a > b) a = b;
}

int main(){
    int n;
    ll m;
    cin >> n >> m;
    vector<int> w(n), v(n);
    rep(i,n) cin >> w[i];
    rep(i,n) cin >> v[i];
    rep(i,n+1)rep(j,10005) dp[i][j] = LLINF;
    dp[0][0] = 0;
    rep(i,n){
        rep(j,10005){
            if(dp[i][j] == LLINF) continue;
            chmin(dp[i+1][j], dp[i][j]); // ボールiを選ばない場合
            if(j+v[i] < 10005) chmin(dp[i+1][j+v[i]], dp[i][j]+w[i]); // ボールiを選ぶ場合
        }
    }
    int ans = 0;
    rrepi(i, 10005, 0){
        if(dp[n][i] <= m){
            ans = i;
            break;
        }
    }
    cout << ans << el;
    return 0;
}
