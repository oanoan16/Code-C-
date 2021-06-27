#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll n, ans, a[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

ll pwr(ll a, ll n){
    if (n==0) return 1;
    if (n==1) return a;
    ll r=pwr(a, n/2);
    if (n&1) return r*r*a;
    return r*r;
}

void Try(ll n, int i, ll x){
    if (i>10) return;
    if (n==1){
        ans=min(ans, x);
        return;
    }
    for (ll j=2; j<=n; j++){
        if (n%j==0){
            ll y=pwr(a[i], j-1);
            if (y>0 && x<ans/y){
                x*=y;
                Try(n/j, i+1, x);
                x/=y;
            }
        }
    }
}

void solve(){
    cin >> n;
    ans=1e18;
    Try(n, 0, 1);
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