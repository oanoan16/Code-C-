#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vi g[1005], visited;
int n, k;

int TPLT(){
    int c=0;
    memset(visited, 0, sizeof(visited));
    for (int i=1; i<=n; i++){
        stack <int> s;
        if (visited[i]==0){
            c++;
            visited[i]=1;
            s.push(i);
            while (!s.empty()){
                int x=s.top();
                s.pop();
                for (auto j:g[x]){
                    if (!visited[j]){
                        visited[j]=1;
                        s.push(x);
                        s.push(j);
                        break;
                    }
                }   
            }
        }
    }
    return c;
}


void solve(){
    int n, k, c=0;
    cin >> n >> k;
    vector <pair<int, int> > vp;
    visited.resize(n+1, 0);
    for (int i=0; i<1005; i++) g[i].clear();
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        vp.push_back(make_pair(u, v));
    }

    for (auto i:vp){
        

}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


