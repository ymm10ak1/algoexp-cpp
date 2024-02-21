// Q7. ボールと2つの箱
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
    vector<int> w(n);
    int sum = 0; 
    rep(i,n){
        cin >> w[i];
        sum += w[i];
    }
    // NOTE: 解説はdp[i][j]=trueのとき、dp[i+1][j+w[i]],dp[i+1][abs(j-w[i])]もtrueとする実装している
    // i枚目のカードを2つのグループに分けたとき、各グループの数値の総和の差がjとなるか
    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
    dp[0][0] = 0;
    rep(i,n){
        rep(j,sum+1){
            if(dp[i][j] < 0) continue;
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            if(j+w[i] <= sum) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+w[i]);
        }
    }
    int ans = INF;
    rep(i,sum+1){
        if(dp[n][i] != -1){
            int v = sum-dp[n][i];
            ans = min(ans, abs(dp[n][i]-v));
        }
    }
    cout << ans << el;
    return 0;
}
