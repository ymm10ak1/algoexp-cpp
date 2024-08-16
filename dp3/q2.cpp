// Q2. 部分和問題
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
    int n,m; cin >> n >> m;
    vector<int> w(n);
    rep(i,n) cin >> w[i];
    // NOTE: 解説では配るDPで実装していた
    vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
    dp[0][0] = true;
    repi(i,1,n+1){
        rep(j,m+1){
            if(j-w[i-1] >= 0){
                if(dp[i-1][j-w[i-1]] || dp[i-1][j]) dp[i][j] = true;
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][m]) cout << "Yes" << el;
    else cout << "No" << el;
    return 0;
}
