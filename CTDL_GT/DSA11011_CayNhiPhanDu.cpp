#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1e4+5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

vector <vector <int>> g;
vector <int> r;
vector <int> ele;


int DFS(int u){
    vector <int> visited;
    visited.resize(N);
    stack <int> s;
    s.push(u);
    visited[u]=1;
    while (!s.empty()){
        int x=s.top();
        s.pop();
        if (g[x].size()==1) return 0;
        else {
            for (auto i:g[x]){
                if (!visited[i]){
                    s.push(x);
                    s.push(i);
                    visited[i]=1;
                    break;
                }
            }
        }
    }
    return 1;
}

void solve(){
    int n, root=-1;
    cin >> n;
    g.clear();
    r.clear();
    ele.clear();
    g.resize(N);
    r.resize(N);
    for (int i=0; i<n; i++){
        int u, v;
        char x;
        cin >> u >> v >> x;
        if (root==-1) root=u;
        g[u].push_back(v);
    }
    cout << DFS(root) << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


