#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve(){
	int m, n , a, b, aDiv, bDiv, ans, a_bDiv, lcm;
    cin >> m >> n >> a >> b;
    if (m > n) swap(m, n);
    lcm = (a*b)/__gcd(a, b);
    aDiv = n/a - (m-1)/a;
    bDiv = n/b - (m-1)/b;
    a_bDiv = n/lcm - (m-1)/ lcm;
    ans= aDiv + bDiv - a_bDiv;
    cout << ans << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	while (t--) solve();
    return 0;
}




