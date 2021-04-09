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
		ll n, a=0, b=0, m;
		cin >> n;	
		m=n/7;
		for (int i=m; i>=0; i--)
		{
			if ((n-i*7)%4==0){
				b=i;
				a=(n-b*7)/4;
				break;
			}			
		}
		if (a!=0 || b!=0){
			for (int i=1; i<=a; i++) cout << 4;
			for (int i=1; i<=b; i++) cout << 7;
		}
		else cout << -1;
		cout << endl;
	}		
	return 0;
}


