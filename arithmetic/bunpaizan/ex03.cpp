// 分配算 問題3
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int a, k;
    cin >> a >> k;
    // x = K*y -> x+y = A -> K*y+y = A -> y = A/(K+1)
    // x = K*((K+1)/A)
    if(a%(k+1) == 0){
        int x = k*(a/(k+1));
        cout << x << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}