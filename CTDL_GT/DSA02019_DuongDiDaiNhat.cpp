#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int m, n, a[25][25], uMax, vMax, ans, c;

void Try(int x){
    for (int i=0; i<n; i++){
        if (a[x][i]){
            a[x][i]=0;
            a[i][x]=0;
            c++;
            ans=max(ans, c);
            Try(i);
            a[x][i]=1;
            a[i][x]=1;
            c--;
        }
    }
}

void solve(){
    cin >> n >> m;
    int u, v;
    ans=0;
    for (int i=0; i<25; i++)
        for (int j=0; j<25; j++) a[i][j]=0;
    for (int i=1; i<=m; i++){
        cin >> u >> v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for (int i=0; i<n; i++){
        c=0;
        Try(i);
    }
    cout << ans;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}