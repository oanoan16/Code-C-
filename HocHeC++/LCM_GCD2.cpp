#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ll a[N];

void gcd(){
	a[0]=1;
	for (ll i=1; i<=N; i++){
		ll c=__gcd(i, a[i-1]);
		a[i]=i*a[i-1]/c;
	}
}

void solve(){
	int n;
	cin >> n;
	cout << a[n];
	cout << endl;
}

int main(){
    faster();
    int t=1;
	cin >> t;
	gcd();
	while (t--) solve();
    return 0;
}




