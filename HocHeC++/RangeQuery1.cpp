#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int n, val, k, l, r;
	cin >> n >> k;
    ll a[n+1];
    a[0]=0;
	for (int i=1; i<=n; i++){
        cin >> val;
        a[i]=a[i-1]+val;
    }
    for (int i=0; i<k; i++){
        cin >> l >> r;
        cout << a[r]-a[l-1] << endl;
    }
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}