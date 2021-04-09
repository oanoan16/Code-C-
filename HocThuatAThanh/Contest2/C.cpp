#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int h = 1; h <= t; h++)
	{
		int n, i = 1, s = 0, a[20][20];
		cin >> n;
		while (i <= n)
		{
			s = s + i*i;
			for (int j = i; j <= n; j++)
			{
				a[i][j] = s;
				a[j][i] = s;
			}
			i++;
		}
		cout << "Test " << h << ":\n";
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
				cout << a[j][k] << " ";
			cout << "\n";
		}
	}
   return 0;
}

