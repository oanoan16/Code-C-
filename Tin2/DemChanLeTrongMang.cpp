#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n, a[100000], c;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
		if (a[i]%2==0)
			c++;
	}
	cout << c << " " << n-c;
	return 0;
}


