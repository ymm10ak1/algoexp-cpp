// 小さい数の個数
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int binary_search(int key, const vector<int> &a){
    int left = -1, right = a.size();
    while(right-left > 1){
        int mid = left+(right-left)/2;
        bool ok = (a[mid]>key) ? true : false;
        if(ok) right = mid;
        else left = mid;
    }
    return right;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    rep(i, m){
        int index = binary_search(b[i], a);
        printf("%d\n", index);
    }
    return 0;
}