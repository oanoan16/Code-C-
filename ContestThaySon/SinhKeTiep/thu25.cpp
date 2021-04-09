#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;
int S=0, a[105], n;
bool check=0;

void Try(int x, int s)
{
	if (s > S || check)
		return;
	if (x==n+1)
	{
		if (s==S)
			check=1;
		return;
	}
	Try(x+1,s);
	Try(x+1,s+a[x]);
}

void solve()
{
	S=0;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
		S+=a[i];
	}
	if (S%2!=0) 
		cout << "NO" << endl;
	else
	{
		sort(a+1,a+n);
		S/=2;
		check=0;
		Try(0,0);
		if (check)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;		
	}
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


