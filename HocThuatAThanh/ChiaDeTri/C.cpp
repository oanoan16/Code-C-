#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
ull b;

ll mu(ll a, ll n)
{
	if (n==0)
		return 1;
	if (n==1)
		return a;
	if (n%2==0)
	{
		ull r=mu(a, n/2);
		return (r*r);
	}
	return (mu(a,n-1)*a);		
}

int find(ull k, ull n)
{
	b >>=1;
	if (k==b) return n;
	if (k<b) return find(k,n-1);
	return find(k-b,n-1);
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k, a;
		cin >> n >> k;
		b=mu(2,n);
		a=find(k,n);
		cout << a << endl;
	}
	return 0;
}

