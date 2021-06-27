#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

ll power(ll a, ll n, ll mod){
    if (n==0) return 1;
    if (n==1) return a%mod;
    if (n%2==0){
        ll r=power(a, n/2, mod)%mod;
        return (r*r)%mod;
    }
    return (a*power(a, n-1, mod))%mod;
}
void solve(){
    ll x, y, p;
    cin >> x >> y >> p;
    cout << power(x, y, p);
    cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}