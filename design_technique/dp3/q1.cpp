// Q3. 部分和問題(導入編)
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
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    vector<vector<bool>> dp(n,vector<bool>(m,false));
    dp[0][0] = true;
    // NOTE: 解説では配るDPで実装していた
    repi(i,1,n){
        rep(j,m){
            if(j-a[i-1] >= 0){
                if(dp[i-1][j-a[i-1]] || dp[i-1][j]) dp[i][j] = true;
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int ans = 0;
    rep(i,m) if(dp[n-1][i]) ++ans;
    cout << ans << el;
    return 0;
}
