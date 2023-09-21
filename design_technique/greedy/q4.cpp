// 荷物と箱
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.rbegin(), a.rend());
    vector<bool> check(n, false);
    int cnt = 0;
    rrepi(i, m, 0){
        rep(j, n){
            if(!check[j] && a[j]<=b[i]){
                ++cnt;
                check[j] = true;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}