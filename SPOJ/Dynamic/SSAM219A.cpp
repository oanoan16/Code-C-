#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll pwr(ll n){
	if (n == 0) return 1;
	if (n == 1) return 2;
	if (n % 2 == 0){
		ull r = pwr(n / 2) % base;
		return (r * r) % base;
	} 
	return (pwr(n - 1) * 2) % base;
}

int main()
{
	faster();
	int t, n, k;
	cin >> t;
	while  (t--){
		cin >> n >> k;
		ll a[100005]={0};
		a[0] = 1;
		for (int i = 1; i <= k; i++)
			a[i] =  pwr(i - 1) % base;
		for (int i = k + 1; i <= n; i++)
			a[i] = (2 * a[i - 1] - a[i - k - 1]) % base;
		cout << a[n] << "\n";
	}
	
	return 0;
}


