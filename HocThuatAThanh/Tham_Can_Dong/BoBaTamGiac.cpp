#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

bool comp(ll a, ll b){
	return a>b;
}

void solve(){
	int n, c=0; 
	ll a[100005];
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n, comp);
	for (int i=0; i<n-2; i++)
		if (a[i]<a[i+1]+a[i+2]){
			c=1;
			break;
		}
	if (c==1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();	
	return 0;
}


