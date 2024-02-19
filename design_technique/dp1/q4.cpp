// Q4. タイルの敷き詰め
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
    vector<int> dp(n+1, 0);
    // NOTE: 解説を見るとdp[0]=1にしてあとはfor文のなかで処理していく方法だった
    dp[1] = 1, dp[2] = 2;
    repi(i,3,n+1){
        if(i==3) dp[i] = dp[i-2]+dp[i-1]+1;
        else if(i>=4) dp[i] = dp[i-3]+dp[i-2]+dp[i-1];
    }
    cout << dp[n] << el;
    return 0;
}
