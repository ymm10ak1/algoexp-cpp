// 方程式を解く
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    double n;
    cin >> n;
    vector<double> x, xi;
    rep(i, 10000){
        xi.push_back((double)i/100);
        double d = xi[i];
        double dd = d*d*d+d*d+2*d+3;
        x.push_back(dd);
    }
    auto itr = lower_bound(x.begin(), x.end(), n);
    auto index = itr-x.begin();
    printf("%.10f\n", xi[index]);
    return 0;
}