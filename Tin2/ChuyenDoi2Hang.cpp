#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

int main()
{
	faster();
	int m,n,a[100][100],b,c;
	cin >> n >> m;
	for (int i=0; i<n;i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	cin >> c >> b;
	if (c>b)
		swap(c,b);
	for (int i=0; i<n; i++)
	{
		if (i==c-1)
			for (int j=0; j<m; j++)
				swap(a[c-1][j],a[b-1][j]);
		for (int j=0; j<m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}


