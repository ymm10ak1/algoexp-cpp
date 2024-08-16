// A+(A+1)+...+B(再帰)
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int f(int x){
    if(x == 0) return 0;
    return x+f(x-1);
}

int main(){
    int a, b;
    cin >> a >> b;
    printf("%d\n", f(b)-f(a-1));
    return 0;
}