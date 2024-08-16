// 部分和問題(再帰-1)
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

vector<int> a;

bool f(int i, int j){
    if(i == 0){
        if(j == 0) return true;
        return false;
    }
    bool flag = false;
    if(j >= a[i-1] && f(i-1, j-a[i-1])) flag = true;
    if(f(i-1, j)) flag = true;
    return flag;
}

int main(){
    int n, x;
    cin >> n >> x;
    a.resize(n);
    rep(i, n) cin >> a[i];
    if(f(n, x)) printf("Yes\n");
    else printf("No\n");
    return 0;
}