#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main()
{
	faster();
	int m,n,a[100][100];
	ll b[100][100]={0},maxR=0,maxC=0,keyR,keyC,c;
	cin >> n >> m;
	for (int i=0; i<n;i++)
	{
		c=0;
		for (int j=0; j<m; j++)
		{
			cin >> a[i][j];	
			c+=a[i][j];
			b[0][j]+=a[i][j];
		}
		if (c>maxR)
		{
			maxR=c;
			keyR=i;
		}		
	}
	for (int j=0; j<m; j++)
		if(b[0][j]>maxC)
		{
			maxC=b[0][j];
			keyC=j;
		}
	for (int i=keyR; i<n-1;i++)
		for (int j=0; j<m; j++)
			a[i][j]=a[i+1][j];
	for (int j=keyC; j<m-1;j++)
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


