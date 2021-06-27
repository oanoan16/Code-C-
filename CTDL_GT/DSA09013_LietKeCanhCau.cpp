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

int vis[1005];
vector <vector <int> > g, a;
vector <pair<int, int>> vp, ans;
int n, k, TPLT_g;

void bfs(int u){
    queue <int> q;
    q.push(u);
    vis[u]=1;
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (auto j:a[x]){
            if (!vis[j]){
                vis[j]=1;
                q.push(j);
            }
        }
    }
}

int TPLT(){
    int c=0;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            bfs(i);
            c++;
        }
    }
    return c;
}

void isBridge(int j){
    a.clear();
    a.resize(n+1);
    int u, v;
    for (int i=0; i<k; i++){
        if (i!=j){
            u=vp[i].f;
            v=vp[i].s;
            a[u].push_back(v);
            a[v].push_back(u);
        }
    }
    int TPLT_a=TPLT();
    if (TPLT_a>TPLT_g){
        u=vp[j].f;
        v=vp[j].s;
        if (u>v) swap(u, v);
        cout << u << " " << v << " ";
    }

}
void solve(){
    cin >> n >> k;
    g.clear();
    g.resize(n+1);
    memset(vis, 0, sizeof(vis));
    vp.clear();
    vp.resize(k+1);
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        vp[i].f=u;
        vp[i].s=v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    a=g;
    TPLT_g=TPLT();
    for (int i=0; i<k; i++){
        memset(vis, 0, sizeof(vis));
        isBridge(i);
    }
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}