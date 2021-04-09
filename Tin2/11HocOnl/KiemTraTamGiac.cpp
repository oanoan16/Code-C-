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
	ll a,b,c, d=0;
	cin >> a >> b >> c;
	if (a==b && b==c) 
	 	d=3;
	else if ((a==b) || (b==c) || (c==a)) 
		d=2;
	else if ((a*a+b*b==c*c)|| (b*b+c*c==a*a) || (c*c+a*a==b*b))
		d=1;
	cout << d;
	
	return 0;
}


