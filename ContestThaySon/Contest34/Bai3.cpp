#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <ull> v;
typedef vector <string> vs;
v a;

void solve(){
	ull n, s=0; 
	cin >> n;
	a.resize(n);
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i=0; i<n; i++){
		s=s+(a[i]*i)%base;
		s%=base;
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


