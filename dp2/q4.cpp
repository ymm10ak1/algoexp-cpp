// Q4. コマの移動(1)
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
    vector<vector<int>> dp(n,vector<int>(n,0));
    dp[0][0] = 1;
    rep(i,n){
        rep(j,n){
            // NOTE: if文の条件でi-1>=0, j-1>=0で分けるともう少し記述が簡単になる
            if(i>0 && j>0) dp[i][j] = dp[i-1][j]+dp[i][j-1];
            if(i==0 && j>0) dp[i][j] = dp[i][j-1];
            if(j==0 && i>0) dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n-1][n-1] << el;
    return 0;
}
