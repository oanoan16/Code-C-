#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

ll a[105][105];

void solve(){
    int n, m;
    cin >> n >> m;
    for (int i=0; i<105; i++)
        for (int j=0; j<105; j++){
            if (i==j) a[i][j]=0;
            else a[i][j]=INF;
    } 
    for (int i=0; i<m; i++){
        int u, v, x;
        cin >> u >> v >> x;
        a[u][v]=x;
        a[v][u]=x;
    }
    for (int k=1; k<=n; k++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--){
        int u, v;
        cin >> u >> v;
        cout << a[u][v] << endl;
    }
}

int main(){
    faster();
    solve();
    return 0;
}