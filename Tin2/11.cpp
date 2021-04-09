#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int n, a[10000], c=1e6, x, y;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	for (int i=0; i<n-1; i++)
		if (c>a[i+1]-a[i]){
			c=a[i+1]-a[i];
			x=a[i];
			y=a[i+1];
		}
	cout << c << " " << x << " " << y;	
	return 0;
}


