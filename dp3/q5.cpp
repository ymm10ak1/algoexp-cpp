// Q5. 部分和問題(応用1)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = n-1; i >= s; --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

int main(){
    int n, m; cin >> n >> m;
    vector<int> w(n);
    rep(i,n) cin >> w[i];
    vector<vector<int>> dp(n+1,vector<int>(m+1,INF));
    dp[0][0] = 0;
    rep(i,n){
        rep(j,m+1){
            if(dp[i][j] == INF) continue;
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            if(j+w[i] <= m) dp[i+1][j+w[i]] = min(dp[i+1][j+w[i]], dp[i][j]+1);
        }
    }
    if(dp[n][m] == INF) cout << -1 << el;
    else cout << dp[n][m] << el;
    return 0;
}
