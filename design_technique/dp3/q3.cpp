// Q3. ナップサック問題(導入編)
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
    vector<int> a(n-1), b(n-1);
    rep(i,n-1) cin >> a[i];
    rep(i,n-1) cin >> b[i];
    vector<vector<int>> dp(n,vector<int>(m,-1));
    dp[0][0] = 0;
    rep(i,n-1){
        rep(j,m){
            if(dp[i][j] == -1) continue;

            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            if(j+a[i] < m) dp[i+1][j+a[i]] = dp[i][j]+b[i]; // ここも自身とのmaxを取るべき
        }
    }
    if(dp[n-1][m-1] != 0) cout << dp[n-1][m-1] << el;
    else cout << -1 << el;
    return 0;
}
