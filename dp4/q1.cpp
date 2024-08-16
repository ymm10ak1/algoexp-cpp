// Q1. マス目の経路最適化(1)
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

void print_arr(const vector<vector<int>>& arr){
    rep(i,arr.size()){
        rep(j,arr[i].size()){
            if(j<arr[i].size()-1) cout << arr[i][j] << " ";
            else cout << arr[i][j] << el;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<vector<int>> a(3,vector<int>(n));
    rep(i,3)rep(j,n) cin >> a[i][j];
    vector<vector<int>> dp(3,vector<int>(n,INF));
    rep(i,3) dp[i][0] = a[i][0];
    rep(i,3){
        repi(j,1,n){
            // a[i-1],b[i-1],c[i-1]それぞれa[i],b[i],c[i]の差の絶対値をとる
            // その中から一番小さい要素をdp[i][j]に代入
            int diff = INF;
            rep(k,3){
                if(diff > abs(a[k][j]-dp[i][j-1])){
                    diff = abs(a[k][j]-dp[i][j-1]);
                    dp[i][j] = a[k][j];
                }
            }
        }
    }
    print_arr(dp);
    int ans = INF;
    rep(i,3){
        int sum = 0;
        rep(j,n-1) sum += abs(dp[i][j]-dp[i][j+1]);
        ans = min(ans, sum);
    }
    cout << ans << el;
    return 0;
}
