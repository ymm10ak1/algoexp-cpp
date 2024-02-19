// フィボナッチ数列(再帰-1)
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int fibo(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    return fibo(x-1)+fibo(x-2);
}

int main(){
    int n;
    cin >> n;
    printf("%d\n", fibo(n));
    return 0;
}