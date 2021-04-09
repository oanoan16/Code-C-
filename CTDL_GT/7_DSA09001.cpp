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
    int n, e;
    cin >> n >> e;
    vector <int> a[n+1];
    for (int i=0; i<e; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i=1; i<=n; i++){
        cout << i << ": ";
        for (auto j:a[i]) cout << j << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}