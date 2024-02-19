// バブルソート
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
#define REPI(i, s, n) for(int i=(int)(s); i<=(int)(n); ++i)
#define repli(i, s, n) for(ll i=(s); i<(ll)(n); ++i)
#define repl(i, n) repli(i, 0, n)
#define REPL(i, s, n) for(ll i=(s); i<=(ll)(n); ++i)
#define el '\n'
const int INF = 1e9;
const ll LINF = 1e18;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(k, n){
        bool check = false;
        rep(i, n-1){
            if(a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                check = true;
            }
        }
        if(!check) continue;
        rep(j, n){
            if(j == n-1) cout << a[j] << el;
            else cout << a[j] << " ";
        }
    }
    return 0;
}