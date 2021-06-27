#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    int n, k, visited[1005]={0}, c=1;
    cin >> n >> k;
    vector <int> g[1005];
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    visited[1]=1;
    queue <int> q;
    q.push(1);
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
    for (int i=1; i<=n; i++){
        if (visited[i]==0){
            c=0;
            break;
        }
    }
    if (c==1) cout << "YES"; 
    else cout << "NO";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}