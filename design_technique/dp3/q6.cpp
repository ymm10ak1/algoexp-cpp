// Q6. 部分和問題(応用2)
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> x(n);
    rep(i,n) cin >> x[i];
    vector<vector<bool>> dp(n+1,vector<bool>(a,false));
    dp[0][0] = true;
    rep(i,n){
        rep(j,a){
            if(!dp[i][j]) continue;
            dp[i+1][j] = dp[i][j];
            dp[i+1][(j+x[i])%a] = dp[i][j];
        }
    }
    if(dp[n][b]) cout << "Yes" << el;
    else cout << "No" << el;
    return 0;
}
