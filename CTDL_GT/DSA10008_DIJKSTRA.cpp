#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

vector <int> cost;
vector <vector <pii >> g;

void dijkstra(int u){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, u});
    cost[u]=0;
    while (!pq.empty()){
        auto p=pq.top();
        pq.pop();
        int v=p.s, val=p.f;
        if (val<=cost[v]){
            for (auto j:g[v]){
                int x=j.f, tmp=j.s;
                if (cost[v]+tmp<cost[x]){
                    cost[x]=cost[v]+tmp;
                    pq.push({cost[x], x});
                }
            }
        }
    }
}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    g.clear();
    g.resize(n+1);
    cost.clear();
    cost.resize(n+1, INF);
    for (int i=0; i<m; i++){
        int u, v, x;
        cin >> u >> v >> x;
        g[u].push_back({v, x});
        g[v].push_back({u, x});
    }
    dijkstra(k);
    for (int i=1; i<=n; i++) cout << cost[i] << " ";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}