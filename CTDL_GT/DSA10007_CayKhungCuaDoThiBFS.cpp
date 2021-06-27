#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> vis, prt;
vector <vector <int> > g;
vector <pair <int, int>> ans;

void dfs(int u){
    vis[u]=1;
    for (auto j:g[u]){
        if (!vis[j]){
            ans.pb(make_pair(u, j));
            dfs(j);
        }
    }
}

void bfs(int u){
    queue <int> q;
    q.push(u);
    vis[u]=1;
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (auto j:g[x]){
            if (!vis[j]){
                vis[j]=1;
                ans.pb(make_pair(x, j));
                q.push(j);
            }
        }
    }
}

void solve(){
    int n, m, u;
    bool check=true;
    cin >> n >> m >> u;
    g.clear();
    g.resize(n+1);
    vis.clear();
    vis.resize(n+1, 0);
    ans.clear();
    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(u);
    for (int i=1; i<=n; i++){
        if (!vis[i]) check=false;
    }
    if (check){
        for (auto i:ans) cout << i.f << " " << i.s << endl;
    }
    else cout << -1;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}