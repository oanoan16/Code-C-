#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
// so nho nhat co n uoc
typedef long long ll;
int t;
ll n, res, a[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

ll pow(ll a, ll n)
{
	if (n == 1)	
		return a;
	ll r = pow(a, n/2);
	if (n & 1)
		return r*r*a;
	else
		return r*r;
}

void Try(ll n, ll i, ll x)
{
	if (n == 1)
	{
		res = min(res, x);
		return;
	}
	for (ll k = 2; k <= n; k++)
	{
		if (n % k == 0)
		{
			ll y = pow(a[i], k-1);
			if (y > 0 && x < res/y)
			{
				x *= y;
				Try(n/k, i+1, x);
				x /= y;
			}
		}
	}
}

void solve()
{
	cin >> n;
	res = 1e18;
	Try(n, 0, 1);
	cout << res << endl;
}

int main()
{
	faster();
	solve();	
	return 0;
}


