// Q2. マスの移動(1)
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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> dp(n,0);
    repi(i,1,n){
        if(i == 1) dp[i] = a[i];
        else if(i >= 2) dp[i] = min(dp[i-1]+a[i], dp[i-2]+2*a[i]);
    }
    cout << dp[n-1] << el;
    return 0;
}
