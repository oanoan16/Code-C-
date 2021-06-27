#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1e5+5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;
vector <int> r;
vector <int> ele;


void DFS(int u){
    vector <int> visited;
    visited.resize(N);
    stack <int> s;
    s.push(u);
    visited[u]=1;
    while (!s.empty()){
        int x=s.top();
        s.pop();
        if (g[x].size()==0) ele.push_back(x);
        else {
            for (auto i:g[x]){
                if (!visited[i]){
                    r[i]=r[x]+1;
                    s.push(x);
                    s.push(i);
                    visited[i]=1;
                    break;
                }
            }
        }
    }
}

void solve(){
    int n, ans=1;
    cin >> n;
    g.clear();
    r.clear();
    ele.clear();
    g.resize(N);
    r.resize(N);
    for (int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    DFS(1);
    for (auto x:ele){
        ans=max(ans, r[x]);
    }
    cout << ans << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


