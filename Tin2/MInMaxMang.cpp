#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n, a[100000], Cmin=1e9, Cmax=-1e9;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
		if (a[i]>Cmax)
			Cmax=a[i];
		else if (a[i]<Cmin)
			Cmin=a[i];
	}
	cout << Cmax << " " << Cmin;
	return 0;
}


