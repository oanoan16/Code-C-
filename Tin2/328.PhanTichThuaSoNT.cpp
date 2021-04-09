#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n,i=2,c=0;
	cin >> n;
	while (n>1)
	{
		while (n%i==0)
		{
			c++;
			if (c==1)
				cout << i;
			else 
				cout << 'x' << i;
			n=n/i;
		}
		i++;
	}	
	return 0;
}


