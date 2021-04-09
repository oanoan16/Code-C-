#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

int main()
{
	faster();
	int n, a[100][100],k,Cmax=0;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		int c=0;
		for (int j=1; j<=n; j++)
		{
			cin >> a[i][j];
			if (prime(a[i][j]))
				c++;
		}
		if (c>Cmax)
		{
			Cmax=c;
			k=i;
		}
	}
	cout << k << endl;
	for (int i=1; i<=n; i++)
		if (prime(a[k][i]))
			cout << a[k][i] << " ";	
	return 0;
}


