#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int n, k, c=0, ans=0;
vector <vector <int> > g1;
vector <vector <int> > g2;

int Deg(){
    for (int i=1; i<=n; i++){
        if (g1[i].size()!=g2[i].size()) return 0;
    }
    return 1;
}

void solve(){
    cin >> n >> k;
    c=0;
    ans=0;
    g1.clear();
    g1.resize(n+1);
    g2.clear();
    g2.resize(n+1);
    for (int i=0; i<k; i++){
        int u, v;
        cin >> u >> v;
        g1[u].push_back(v);
        g2[v].push_back(u);

    }
    cout << Deg();
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}