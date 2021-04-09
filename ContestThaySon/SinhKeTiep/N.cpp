#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
 
ll binary(ll a)
{
	if (a == 1)	
		return 1;
	else if (a % 2 == 0)
		return 10*binary(a/2);
	else 
		return 10*binary(a/2) + 1;		
}
void solve()
{
	ll n, b = 1, s = 9;
	cin >> n;
	while (s % n != 0)
	{
		b++;
		s = 9 * binary(b);
	}
	cout << s << endl; 	
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


