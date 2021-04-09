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
	ll b[100][100]={0};
	cin >> n;
	for (int i=0; i<n;i++)
		for (int j=0; j<n; j++)
			cin >> a[i][j];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			b[0][i]+=a[i][j];
			b[1][i]+=a[j][i];				
		}
	}
	for (int i=0; i<2;i++)
	{
		for (int j=0; j<n; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}		
	return 0;
}


