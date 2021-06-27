#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> vis, prt;
vector <vector <int> > g;
bool ans;

void dfs(int u){
    vis[u]=1;
    for (auto j:g[u]){
        if (vis[j]){
            if (prt[u]!=j) ans=true;
        }
        else {
            prt[j]=u;
            dfs(j);
        }
    }
}

void solve(){
    int n, k;
    cin >> n >> k;
    ans=false;
    g.clear();
    g.resize(n+1);
    vis.clear();
    vis.resize(n+1, 0);
    prt.clear();
    prt.resize(n+1);
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i=1; i<=n; i++){
        if (ans) break;
        if (!vis[i]) dfs(i); 
    }
    if (ans) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}