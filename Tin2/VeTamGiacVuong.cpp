#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<=i; j++)
			cout << "*";
		cout << endl;
	}
	
	return 0;
}


