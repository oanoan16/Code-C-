#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;

void solve()
{
	int n, s=0, t, a[105], l[100000]={0};
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	if (s%2!=0) 
		cout << "NO" << endl;
	else
	{
		s/=2;
		l[0]=1;
		for (int i=1; i<=n; i++)
			for (int t=s; t>=a[i]; t--)
			{
				if (l[t]==0 && l[t-a[i]]==1)
					l[t]=1;
			}
		if (l[s]) 
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


