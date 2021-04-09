#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int n,a,b,c; 
	cin >> n;
		cout << "0 1 ";
	if (n>2)
	{
		a=0;
		b=1;
		for (int i=3; i<=n; i++) 
		{
			c=a+b;
			a=b;
			b=c;
			cout << c << " ";
		}
	}	
	return 0;
}


