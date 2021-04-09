#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main()
{
	faster();
	ll n,a,b;
	cin >> n;
	a=n%10;
	while (n>0)
	{
		b=n%10;
		n/=10;
	}
	cout << b << " " << a;
	return 0;
}


