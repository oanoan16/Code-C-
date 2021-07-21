#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll find(ll n, ll k, ll l, ll r){
    if (l==r && l==1) return 1;
    if (l>k) return find(n/2, k/2, l-k, r-k);
    if (r<k) return find(n/2, k/2, l, r);
    if (l==k) return find(n/2, k/2, 1, r-k) + (n&1);
    if (r==k) return find(n/2, k/2, l, k-1) + (n&1);
    return find(n/2, k/2, l, k-1) + find(n/2, k/2, 1, r-k) + (n&1);
}

void solve(){
    ll n, l, r, k=1, b;
    cin >> n >> l >> r;
    while (n>=k) k*=2;
    k/=2;
    b=find(n, k, l, r);
    cout << b << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}