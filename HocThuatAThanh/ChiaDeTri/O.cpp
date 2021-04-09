#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <ll> vll;
typedef vector <string> vs;

ll  n, ans=1e9; 
vll a;

void solve()
{
	for (ll i=0; i<n; i++){
		vll b=a; 
		ll c=0, d=0;
		for (ll j=0; j<i; j++){
			b[j]+=c;
			c--;
		}
		for (ll j=i; j<n; j++){
			b[j]+=c;
			c++;
		}
		sort(b.begin(), b.end());
		ll b0=max(max(b[n/2], -c), d);
		ll step=0;
		for (ll j=0; j<i; j++){
			step+=abs(b0-a[j]);
			b0++;
		}
		for (ll j=i; j<n; j++){
			step+=abs(b0-a[j]);
			b0--;
		}
		ans=min(ans, step);
	}
	cout << ans;
}

int main()
{
	faster();
	cin >> n;
	a.resize(n);
	for (int i=0; i<n; i++)
		cin >> a[i];
	solve();	
	return 0;
}


