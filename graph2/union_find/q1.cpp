// Union-Find
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
        int rx = root(x); // xの親
        int ry = root(y); // yの親
        // 同じ親ならば終了
        if(rx == ry) return;
        // yのsizeの方が大きい場合
        if(siz[rx] < siz[ry]){
            par[rx] = ry; // rxをryの子にする
            siz[ry] += siz[rx];
        }else{
            par[ry] = rx; // ryをrxの子にする
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
        if(uf.isSame(a, b)) cout << "Yes" << el;
        else{
            cout << "No" << el;
            uf.unite(a, b);
        }
    }
    return 0;
}
