// Q2. 表と数字(2)
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
    vector<vector<int>> dp(n, vector<int>(n));
    rep(i,n) cin >> dp[0][i];
    repi(i,1,n){
        rep(j,n){
            if(j-1 >= 0) dp[i][j] = (dp[i][j]+dp[i-1][j-1])%100;
            dp[i][j] = (dp[i][j]+dp[i-1][j])%100;
            if(j+1 < n) dp[i][j] = (dp[i][j]+dp[i-1][j+1])%100;
        }
    }
    cout << dp[n-1][n-1] << el;
    return 0;
}
