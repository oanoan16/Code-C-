#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll mu(int b, int n ){
	if (n==0) return 1;
	else{
		ll s=1;
		for (int i=1; i<=n; i++)
			s*=b;
		return s;
	}
}

int dig(int n)
{
	int c=0;
	while (n>0){
		n/=10;
		c++;
	}
	return c;
}

int main()
{
	faster();
	ll n, c=0, y,b; 
	cin >> n;
	y=n;
	b=dig(n);
	while (n>0){
		int x=n%10;
		c+=mu(x,b);
		n/=10;
	}
	if (y==c) cout << 1;
	else cout << 0;
	
	
	return 0;
}


