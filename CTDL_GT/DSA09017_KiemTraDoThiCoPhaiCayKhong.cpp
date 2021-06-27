#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> vis, prt;
vector <vector <int> > g;
int c;

void dfs(int u){
    vis[u]=1;
    for (auto j:g[u]){
        if (!vis[j]){
            vis[j]=1;
            c++;
            dfs(j);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    c=0;
    g.clear();
    g.resize(n+1);
    vis.clear();
    vis.resize(n+1, 0);
    for (int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    if (c!=n-1) cout << "NO";
    else cout << "YES";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}