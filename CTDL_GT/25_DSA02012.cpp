#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
// (n-1)C(m+n-2)
// (m+n-2)! / (n-1)!*(m-1)!
void solve(){
    int n, m, ans=1, a[105][105];
    cin >> m >> n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for (int i=n; i<(m+n-1); i++){
        ans*=i;
        ans/=(i-n+1);
    }
    cout << ans;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


