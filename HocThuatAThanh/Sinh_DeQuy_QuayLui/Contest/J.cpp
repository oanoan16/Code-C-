#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t, a[25][25], Cmax=0, c=0, u, v, n, m, Vmax=0, Umax=0;

void Try(int x)
{
	for (int i=0; i<=Vmax; i++)
	{
		if (a[x][i])
		{
			a[x][i]=0;
			a[i][x]=0;
			c++;
			if (c>Cmax)
				Cmax=c;
			if (x<Vmax)
				Try(i);
			a[x][i]=1;
			a[i][x]=1;
			c--;
		}
	}
}

void solve()
{
	cin >> n >> m;
	for (int i=1; i<=m; i++)
	{
		cin >> u >> v;
		a[u][v]=1;
		a[v][u]=1;
		Umax=max(u,Umax);
		Vmax=max(v,Vmax);
	}
	Try(0);
	cout << Cmax << endl;
}
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		Umax=0;
		Vmax=0;
		c=0; 
		Cmax=0;
		for (int i=0; i<=22; i++)
			for (int j=0; j<=22; j++)
				a[i][j]=0;
		solve();		
	}	
	return 0;
}


