#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int n, k, c=0, ans=0;
vector <vector <int> > g;

void Deg(){
    for (int i=1; i<=n; i++){
        if (g[i].size()&1) c++;
    }
}

void solve(){
    cin >> n >> k;
    c=0;
    ans=0;
    g.clear();
    g.resize(n+1);
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    Deg();
    if (c==0) ans=2;
    else if (c==2) ans=1;
    cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}