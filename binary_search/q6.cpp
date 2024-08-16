// 重さは何番目？
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int binary_search(int key, const vector<int> &w){
    int left = -1, right = w.size();
    while(right-left > 1){
        int mid = left+(right-left)/2;
        bool ok = (w[mid] >= key) ? true : false;
        if(ok) right = mid;
        else left = mid;
    }
    return right;
}

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i, n) cin >> w[i];
    vector<int> w_copy = w;
    sort(w.begin(), w.end());
    rep(i, n){
        int index = binary_search(w_copy[i], w);
        printf("%d\n", index);
    }
    return 0;
}