#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
int c=0;

int kgr(int l,int r,int n,int a[])
{
	if (l>n/2 || r>n) return c;
	if (a[l]*2<=a[r])
	{
		c++;
		return kgr(l+1,r+1,n,a);
	}
	return kgr(l,r+1,n,a);
}
void solve()
{
	int n,a[100005];
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	sort(a+1,a+n+1);
	c=0;
	int b=kgr(1,n/2+1,n,a);
	cout << n-b << endl;
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


