#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
#define MAX 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int a[1005][1005];
void solve(){
    int m, n, w[1005], v[1005];
    cin >>  n >> m;
    for (int i=1; i<=n; i++) cin >> w[i];
    for (int i=1; i<=n; i++) cin >> v[i];

    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            if (i==0 || j==0) a[i][j]=0;
            else if (w[i]<=j){
                a[i][j]=max(v[i]+a[i-1][j-w[i]], a[i-1][j]);
            }
            else a[i][j]=a[i-1][j];
        }
    }
    cout << a[n][m];
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




