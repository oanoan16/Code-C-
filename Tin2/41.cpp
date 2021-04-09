#include <bits/stdc++.h>

int main()
{
	int n,m,t;
	cin>>n>>m;
	int a[20][20];
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin>>a[i][j];
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			int s=0;
			for (int k=1; k<=m; k++)
				s=s+a[i][k]*a[j][k];
			cout<<s<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


