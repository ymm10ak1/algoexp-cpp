// Q1. 表と数字(1)
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
    vector<vector<int>> dp(4, vector<int>(4));
    rep(i,4) cin >> dp[0][i];
    repi(i,1,4){
        rep(j,4){
            if(j-1>=0) dp[i][j] += dp[i-1][j-1];
            dp[i][j] += dp[i-1][j];
            if(j+1<4) dp[i][j] += dp[i-1][j+1];
        }
    }
    cout << dp[3][3] << el;
    return 0;
}
