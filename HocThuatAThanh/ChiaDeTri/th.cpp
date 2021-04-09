#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void Solve(){
	int n;
	ll  a[100000], b[100000] , s, maxs = 0, minb = 0;
	cin >> n;
	b[0]=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i]=b[i-1]+a[i];
		minb=min(minb,b[i]);
		maxs=max(maxs,b[i]-minb);
	}
	cout << maxs << endl;
}
int main()
{
	faster();
	int t;
	cin >> t;	
	while (t--)	Solve();
	return 0;
}


