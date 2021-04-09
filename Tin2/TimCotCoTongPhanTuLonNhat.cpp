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
	cin >> n ;
	for (int i=0; i<n;i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> a[i][j];	
			b[0][j]+=a[i][j];
		}	
	}
	for (int j=0; j<n; j++)
		if(b[0][j]>maxC)
		{
			maxC=b[0][j];
			keyC=j;
		}
	cout << keyC+1 << endl;
	for (int j=0; j<n; j++)
		cout << a[j][keyC] << " ";
	return 0;
}


