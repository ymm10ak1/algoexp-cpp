// 貯金(1)
// 解けなかったため解説見た
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

double f(double n, double x){
    double ans = n+1;
    rep(i, 5){
        ans = ans*x+1;
    }
    return ans;
}

int main(){
    double n, m;
    cin >> n >> m;
    double left = 0, right = 100;
    while(right-left>1e-4){
        double mid = (right+left)/2;
        if(f(n, mid) < m) left = mid;
        else right = mid;
    }
    double ans = left;
    printf("%.10f\n", ans);
    return 0;
}