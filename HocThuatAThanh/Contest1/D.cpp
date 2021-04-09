#include <iostream>
using namespace std;
int main()
{
	int n, x, a[105];
	cin>>x;
	for (int i=1; i<=x; i++)
	{
		cin>>n;
		for (int i=0; i<n; i++)
			cin >> a[i];
		int c=0;
		for (int i=0; i <(n/2) ; i++)
			if (a[i]!=a[n-i-1])
			{
				c=1;
			}
		if (c==1 ) 
			cout<< "NO\n";
		else 
			cout<< "YES\n";		
	}
   return 0;
}

