// 連結成分の最小値
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = (int)(n)-1; i >= (int)(s); --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

class UnionFind{
public:
    vector<int> par, siz;

    UnionFind(int n){
        par.resize(n, -1);
        siz.resize(n, 1);
    }

    int root(int x){
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    void unite(int x, int y){
        int rx = root(x), ry = root(y);
        // 同じ根ならば終了
        if(rx == ry) return;
        if(siz[rx] < siz[ry]){
            par[rx] = ry;
            siz[ry] += siz[rx];
        }else{
            par[ry] = rx;
            siz[rx] += siz[ry];
        }
    }

    bool isSame(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    rep(i,m){
        int a, b; cin >> a >> b;
        uf.unite(a, b);
    }
    // NOTE: 解説ではUnionFindの中に連結成分の最小値を持たせている
    vector<int> minx(n, INF);
    rep(i,n){
        int x = uf.root(i);
        minx[x] = min(minx[x], i);
    }
    rep(i,n) cout << minx[uf.root(i)] << el;
    return 0;
}
