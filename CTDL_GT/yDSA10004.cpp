#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <int> g[1005];
int n, k, c=0;
vector <int> v;

bool BFS(){
    v.assign(n+1, 0);
    queue <int> q;
    v[1]=1;
    q.push(1);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for (auto i:g[x]){
            if (!v[i]){
                v[i]=1;
                q.push(i);
            }
        }
    }
    for (int i=1; i<=n; i++){
        if (!v[i]) return false;
    }
    return true;
}

void solve(){
    cin >> n >> k;
    c=0;
    v.resize(n+1, 0);
    for (int i=0; i<1005; i++) g[i].clear();
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if (BFS()){
        int odd=0;
        for (int i=1; i<=n; i++){
            if (g[i].size()&1) odd++;
        }
        if (odd>2) c=0;
        if (odd==0) c=2;
        else c=1;
    }
    cout << c;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


