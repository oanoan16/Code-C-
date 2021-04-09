#include <iostream>
using namespace std;
int main()
{
	int n,a,x,count;
	cin>>n;
	for ( int i=1; i<=n; i++)
	{
		cin>>a;
		x=a % 10; 
		while (a>9)
		{
			a/=10;
		}
		if (x==a) 
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
   return 0;
}

