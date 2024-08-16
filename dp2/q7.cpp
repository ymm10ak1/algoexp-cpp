// Q7. コマの移動(4)
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
    vector<vector<int>> a(n, vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    vector<vector<int>> dp(n, vector<int>(n,INF));
    dp[0][n-1] = a[0][n-1];
    rep(i,n){
        rrepi(j,n,0){
            // 上の値を足す
            if(i-1 >= 0) dp[i][j] = min(dp[i][j], dp[i-1][j]+a[i][j]);
            // 右の値を足す
            if(j+1 <= n-1) dp[i][j] = min(dp[i][j], dp[i][j+1]+a[i][j]);
        }
    }
    cout << dp[n-1][0] << el;
    return 0;
}
