#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1000000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
    int n, x;
    cin >> n >> x;
    ll ans=0, a[n], b[n];
    for (int i=0; i<n; i++) cin >> a[i];
    b[n-1]=1;
    for (int i=n-2; i>=0; i--){
        b[i]=(b[i+1]*x)%base;
        ans=(ans+a[i]*b[i])%base;
    }
    ans=(ans+a[n-1])%base;
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

