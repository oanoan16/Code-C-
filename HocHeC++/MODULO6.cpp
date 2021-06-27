#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define bas 1000000007
#define N 1007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

ll pwr(ll a, ll n, ll base){
	if (n==0) return 1;
	if (n==1) return a;
	if (n%2==0){
		ll r=pwr(a, n/2, base)%base;
		return (r*r)%base;
	}
	return (pwr(a, n-1, base)*a)%base;		
}

void solve(){
    string s;
    ll m, mod=0, b, ans;
    cin >> s >> b >> m;
    for (auto i:s){
        mod=mod*10+i-'0';
        mod%=m;
    }
    ans=pwr(mod, b, m)%m;
    cout << ans;
    cout << endl;
    
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}


