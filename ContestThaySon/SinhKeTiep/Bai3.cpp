#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t, a[10000],n;
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		cin >> n ;
		a[0]=1e6;
		for (int i=1; i<=n; i++)
			cin >> a[i];
		int i=n;
		while (i>=0 && a[i]<a[i-1])
			i--;
		if (i<1)
		{
			for (int j=1; j<=n; j++)
				cout << j << " ";
			cout << endl;
		}
		else
		{
			swap(a[i],a[i-1]);
			sort(a+i,a+n);
			for (int j=1; j<=n; j++)
				cout << a[j] << " ";
			cout << endl;
		}			
	}
	
	return 0;
}


