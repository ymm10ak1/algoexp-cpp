// フィボナッチ数列(再帰-2)
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

vector<ll> fib;

ll f(ll n){
    if(fib[n] != -1) return fib[n];
    return fib[n] = f(n-1)+f(n-2);
}

int main(){
    int n;
    cin >> n;
    fib.assign(n+1, -1LL);
    fib[0] = 0LL, fib[1] = 1LL;
    printf("%lld\n", f(n));
    return 0;
}