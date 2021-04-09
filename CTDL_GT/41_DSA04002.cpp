#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll pwr(ll a, ll n){
    if (n==0) return 1;
    if (n==1) return a;
    if (n%2==0){
        ll r=pwr(a, n/2)%base;
        return (r*r)%base;
    }
    return (a*pwr(a, n-1))%base;
}
void solve(){
    ll n;
    ll s=0, k;
    cin >> n;
    k=n;
    while (k){
        s=s*10+(k%10);
        k/=10;
    }
    cout << pwr(n, s); 
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