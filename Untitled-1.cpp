#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vector <int> g[1005];
int n, k, c=0;
vector <int> v;

bool DFS(){
    stack <int> s;
    v[1]=1;
    s.push(1);
    while(!s.empty()){
        int x=s.top();
        s.pop();
        for (auto i:g[x]){
            if (!v[i]){
                v[i]=1;
                s.push(x);
                s.push(i);
                break;
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

    if (DFS()){
        int odd=0;
        for (int i=1; i<=n; i++){
            if (g[i].size()&1) odd++;
        }
        if (odd>2) c=0;
        c=(odd) ? 1: 2;
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


