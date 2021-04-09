#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vector <int> g[1005], visited;
void BFS(int u){
    visited[u]=1;
    queue <int> q;
    q.push(u);
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (auto i:g[x]){
            if (!visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
}

void solve(){
    int n, k, c=0;
    cin >> n >> k;
    visited.resize(n+1, 0);
    for (int i=0; i<1005; i++) g[i].clear();
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i=1; i<=n; i++){
        if (!visited[i]){
            BFS(i);
            c++;
        }
    }

    visited.assign(n+1, 0);
    for (int i=1; i<=n; i++){
        visited[i]=1;
        int d=0;
        for (int j=1; j<=n; j++){
            if (!visited[j]){
                BFS(j);
                d++;
            }
        }
        if (d>c) cout << i << " ";
        visited.assign(n+1, 0);
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


