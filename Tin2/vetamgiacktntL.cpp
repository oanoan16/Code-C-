#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n;
	char c='a'-1;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		if (i%2==0)
		{
			c=c+i;
			for (int j=1; j<=i; j++)
				cout << c-- << " ";
			c=c+i;
		}
		else 
			for (int j=1; j<=i; j++)
				cout << ++c << " ";
		cout << endl;		
	}
	
	return 0;
}


