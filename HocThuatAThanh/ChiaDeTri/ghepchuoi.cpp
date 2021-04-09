#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
typedef vector <ull> v;
int main()
{
	faster();
	ll n;
	cin >> n;
	ull a[100000];
	for (ll i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	ll i=0;
	ull s=0;
	while (i<n-1)
	{
		s=(s+ a[i],a[i+1])%base;
		a[i+1]=(a[i]+a[i+1])%base;
		sort(a+i,a+n);
		i++;
	}
	cout << s;	
	return 0;
}


