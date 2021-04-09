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
	cin >> n;
	for (int i=0; i<n;i++)
		for (int j=0; j<n; j++)
			cin >> a[i][j];
	for (int i=0; i<n;i++)
		for (int j=0; j<n; j++)
			if (j==i) swap(a[i][j],a[i][n-i-1]);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}		
	
	return 0;
}


