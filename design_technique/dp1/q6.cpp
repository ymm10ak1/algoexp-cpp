// Q6. すごろく
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
    int n, m;
    cin >> n >> m;
    vector<int> d(m);
    rep(i,m) cin >> d[i];
    vector<bool> dp(n+1, false);
    dp[0] = true;
    repi(i,1,n+1){
        rep(j,m){
            // if(i-d[j] == 0) dp[i] = true; // この記述はいらない
            if(i-d[j] >= 0 && dp[i-d[j]]) dp[i] = true;
        }
    }
    if(dp[n]) cout << "Yes" << el;
    else cout << "No" << el;
    return 0;
}
