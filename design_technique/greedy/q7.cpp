// 区間スケージュリング問題
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> st(n);
    rep(i, n) cin >> st[i].second >> st[i].first;
    sort(st.begin(), st.end());
    int now = 0, cnt = 0;
    rep(i, n){
        if(now <= st[i].second){
            ++cnt;
            now = st[i].first;
        }
    }
    cout << cnt << endl;
    return 0;
}