#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main()
{
	faster();
	int m,n,a[100][100],k,c,max;
	cin >> n >> m;
	for (int i=0; i<n;i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	for (int i=0; i<n; i++)
	{
		c=0;
		for (int j=0; j<m; j++)
			c+=a[i][j];
		if (c>max)
		{
			max=c;
			k=i;
		}
	}
	for (int i=k; i<n-1;i++)
		for (int j=0; j<m; j++)
			a[i][j]=a[i+1][j];
	max=0;
	for (int j=0; j<m; j++)
	{
		c=0;
		for (int i=0; i<n-1; i++)
			c+=a[i][j];
		if (c>max)
		{
			max=c;
			k=j;
		}
	}
	for (int j=k; j<m-1;j++)
		for (int i=0; i<n-1; i++)
			a[i][j]=a[i][j+1];
	for (int i=0; i<n-1;i++)
	{
		for (int j=0; j<m-1; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}		
	return 0;
}


