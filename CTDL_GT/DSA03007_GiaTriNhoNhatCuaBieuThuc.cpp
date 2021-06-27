#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define INF INT_MAX
#define f first 
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;

void solve(){
    int n;
    cin >> n;
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<ll>());
    ll ans=0;
    for (int i=0; i<n; i++) ans+=a[i]*b[i];
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