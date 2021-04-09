#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;

void printf(int a[], int b)
{
	cout << "[" << a[1];
	for (int i=2; i<=b; i++)
		cout << " " << a[i];
	cout << "] " ;
}

void Try(int x, int a[])
{
	if (x<1)
		return;
	else
	{
		int b[x];
		for (int i=1; i<x; i++)
			b[i]=a[i]+a[i+1];
		Try(x-1,b);
		printf(a,x);
	}
}
void solve()
{
	int n, i, a[15];
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	Try(n, a);
	cout << endl;
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


