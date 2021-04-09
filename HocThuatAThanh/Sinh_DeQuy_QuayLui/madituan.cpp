#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, c=0, m[10][10], a, b;
int x[9]={0,2,1,-1,-2,-2,-1,1,2};
int y[9]={0,1,2,2,1,-1,-2,-2,-1};

void printf()
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void Try(int i,int j)
{
	c++;
	m[i][j]=c;
	int u, v;
	for (int k=1; k<=8; k++)
	{
		if (c==n*n)
		{
			printf();
			exit(0);
		}
		else
		{
			u=i+x[k];
			v=j+y[k];
			if (u>=1 && u<=n && v>=1 && v<=n && m[u][v]==0)
				Try(u,v);
		}
	}
	c--;
	m[i][j]=0;	
}
int main()
{
	faster();
	cin >> n >> a >> b;
	Try(a,b);	
	return 0;
}

