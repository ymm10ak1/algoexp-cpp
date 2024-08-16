// 1円玉と5円玉
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int cnt5 = n/5;
    int cnt1 = n%5;
    cout << cnt5+cnt1 << endl;
    return 0;
}