#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
			cout << i+(j-1)*n-j*(j-1)/2 << " ";
		cout << endl;
	}
	
	return 0;
}


