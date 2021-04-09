#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
	int n, k, a[100];
	ll s=0;
	cin >> n >> k;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	if (k*2>n) k=n-k;
	for (int i=0; i<n; i++){
		if (i<k) s-=a[i];
		else s+=a[i];
	}
	cout << s << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


