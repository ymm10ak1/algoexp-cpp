// 部分和問題(再帰-2)
// NOTE: 解けなかったため解説見た
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

vector<int> a;
// -1なら未達成、0ならfalse, 1ならtrue
vector<vector<int>> memo;

int f(int i, int j){
    // 過去に計算済みの場合メモに記録された値を返す
    if(memo[i][j] != -1) return memo[i][j];
    // i=0のとき、j=0ならtrue
    if(i == 0) return memo[i][j] = j==0;
    
    // それ以外のとき、問題文の通りに判定する
    int flag = 0;
    if(j>=a[i-1] && f(i-1, j-a[i-1])==1) flag = 1;
    if(f(i-1, j) == 1) flag = 1;
    return flag;
}

int main(){
    int n, x;
    cin >> n >> x;
    a.resize(n);
    memo.resize(n+1, vector<int>(x+1, -1));
    rep(i, n) cin >> a[i];
    string ans = f(n, x) == 1 ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}