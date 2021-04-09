#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int h = 1; h <= t; h++)
	{	
		int a[105], b[105];
		int n,m,p;
		cin >> n >> m >> p;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		for (int i = n - 1; i >= p; i--)
		{
			a[m + i] = a[i];
		}
		for (int i = 0; i < m ; i++)
			a[p + i] = b[i];
		cout << "Test " << h << ":\n";
		for (int i = 0; i < n + m; i++)
			cout << a[i] << " ";
		cout << "\n";	
	}
   return 0;
}

