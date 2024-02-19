// Q3. 3つの仕事
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
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    rep(i,n)rep(j,3) cin >> a[i][j];
    vector<vector<int>> dp(n, vector<int>(3,0));
    rep(i,3) dp[0][i] = a[0][i];
    repi(i,1,n){
        // NOTE: 解説ではfor文を使わない方法を使用していた
        rep(j,3){
            dp[i][j] = a[i][j];
            int ak_max = 0;
            rep(k,3) if(j != k) ak_max = max(ak_max, dp[i-1][k]);
            dp[i][j] += ak_max;
        }
    }
    int ans = 0;
    rep(i,3) ans = max(ans, dp[n-1][i]);
    cout << ans << el;
    return 0;
}
