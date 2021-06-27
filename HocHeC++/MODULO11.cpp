#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define bae 1000000007
#define N 1000000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

ll add(ll a, ll n, ll base){
    if (n==0 || a==0) return 0;
    if (n%2==0){
        ll r=add(a, n/2, base)%base;
        return (r*2)%base;
    }
    return (a+add(a, n-1, base))%base;
}

void solve(){
    ll a, b, c, ans;
    cin >> a >> b >> c;
    ans=add(a, b, c);
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

