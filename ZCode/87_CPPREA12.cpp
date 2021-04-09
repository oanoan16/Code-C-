#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll a[105];
void solve(){
	int n;
    ll ans=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
        ll res=1;
        for (int j=i; j<n; j++){
            res*=a[j];
            ans=max(ans, res);
        }
    }
    cout << ans << endl;
}

int main(){	
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
