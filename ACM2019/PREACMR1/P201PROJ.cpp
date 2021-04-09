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
	int t;
	cin >> t;
	while (t--){
		ll a, b, n, c=0;
		cin >> a >> b;
		n=b;
		while (n){
			c++;
			n/=10;
		}
		if (b < pow(10, c)-1) c--;
		cout << c*a << endl;
	}
	return 0;
}


