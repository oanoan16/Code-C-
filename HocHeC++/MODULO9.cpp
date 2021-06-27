#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1000000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

ll p[1005];

ll pwr(ll a, ll n){
    if (n==0) return 1;
    if (n==1) return a%base;
    if (n%2==0){
        ll r=pwr(a, n/2)%base;
        return (r*r)%base;
    }
    return (a*pwr(a, n-1))%base;
}

ll nck(ll n, ll r){
    if (n==r || r==0) return 1;
    return (p[n]*pwr((p[r]*p[n-r])%base, N))%base;
}
void solve(){
    ll n, r, ans;
    cin >> n >> r;
    ans=nck(n, r);
    if (ans<0) ans+=base;
    else ans%=base;
    cout << ans;
    cout << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
    p[0]=1;
    for (int i=1; i<1005; i++){
        p[i]=(p[i-1]*i)%base;
    }
	while (t--) solve();
	return 0;
}

