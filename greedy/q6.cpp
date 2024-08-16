// 巡回セールスマン問題(貪欲法)
// 解けなかったため解説見た
#include<bits/stdc++.h>
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    rep(i, n) cin >> p[i].first >> p[i].second;
    vector<bool> check(n, false);
    check[0] = true;
    int cur_index = 0;
    double ans = 0.0;
    rep(i, n-1){
        int nex = -1;
        int mind = 1000000000;
        rep(j, n){
            if(check[j]) continue;
            int d = (p[j].second-p[cur_index].second)*(p[j].second-p[cur_index].second)+
                        (p[j].first-p[cur_index].first)*(p[j].first-p[cur_index].first);
            if(mind > d){
                mind = d;
                nex = j;
            }
        }
        check[nex] = true;
        ans += sqrt(mind);

        cur_index = nex;
    }
    int last = (p[0].second-p[cur_index].second)*(p[0].second-p[cur_index].second)+
                        (p[0].first-p[cur_index].first)*(p[0].first-p[cur_index].first);
    ans += sqrt(last);
    printf("%.15f\n", ans);
    return 0;
}