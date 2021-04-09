#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{	
	int n,m,x,y,a[100][100];
	faster();
	cin >> n >> m;
	x=n; y=m;
	int j=max(m,n);
	int i=0;
	while (n--)
	{
		i++;
		for (int k=1; k<=m; k++)
			a[i][k]=j;
		for (int k=i; k<=x; k++)
			a[k][m]=j;
		j--;
		m--;
	}
	for (int k=1; k<=x; k++)
	{
		for (int h=1; h<=y; h++)
			cout << a[k][h];
		cout << endl;
	}
	return 0;
}


