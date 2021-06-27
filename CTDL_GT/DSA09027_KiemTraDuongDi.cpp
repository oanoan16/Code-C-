#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define pb push_back 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;


void solve(){
    int n, k, visited[1005]={0}, c=0, q, u, v;
    cin >> n >> k;
    vector <int> g[1005];
    for (int i=0; i<k; i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i=1; i<=n; i++){

        if (visited[i]==0){
            c++;
            visited[i]=c;
            queue <int> q;
            q.push(i);
            while (!q.empty()){
                int x=q.front();
                q.pop();
                for (auto j:g[x]){
                    if (!visited[j]){
                        visited[j]=c;
                        q.push(j);
                    }
                }
            }
        }
    } 
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> u >> v;
        if (visited[u]==visited[v]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}