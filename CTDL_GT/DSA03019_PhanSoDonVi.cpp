#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void frac(ll a, ll b){
    ll x=__gcd(a, b);
    if (x>1) return frac(a/x, b/x);
    if (a==1){
        cout << a << '/' << b;
        return;
    }
    ll k=b/a+1;
    cout << 1 << "/" << k << " + ";
    frac(a*k-b, b*k);
}

void solve(){
    ll p, q;
    cin >> p >> q;
    frac(p, q);
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


