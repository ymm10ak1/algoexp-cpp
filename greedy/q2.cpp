// お菓子(1)
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n > 0){
        if(n%2 == 0) n/=2;
        else --n;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}