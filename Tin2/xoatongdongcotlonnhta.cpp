#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	int m, n, a[100][100], keyc, keyr, sr=0, sc=0, srmax=0, scmax=0;
	faster();
	cin >> m >> n;
	for (int i=1; i<=m; i++)
	{
		sr=0;
		for (int j=1; j<=n; j++)
		{
			cin >> a[i][j];
			sr+=a[i][j];
		}
		if (sr>srmax)
		{
			keyr=i;
			srmax=sr;
		}
	}
	for (int i=1; i<=n; i++)
	{
		int sc=0;
		for (int j=1; j<=m; j++)
			sc+= a[j][i];
		if (sc>scmax)
		{
			keyc=i;
			scmax=sc;
		}
	}
	for (int i=keyr; i<m; i++)
		for (int j=1; j<=n; j++)
			a[i][j]=a[i+1][j];
	for (int i=keyc; i<n; i++)
		for (int j=1; j<m; j++)
			a[i][j]=a[i][j+1];
	for (int i=1; i<m; i++)
	{
		for (int j=1; j<n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}	
	return 0;
}


