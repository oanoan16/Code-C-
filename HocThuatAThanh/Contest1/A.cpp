#include <iostream>
using namespace std;
int main()
{
	long long  n,a,b,y,x;
	cin>>n;
	for ( long long i=1; i<=n; i++)
	{
		cin>>a>>b;
		x=a;
		y=b;
		while (a*b!=0)
		{
			if (a>b) 
				a%=b;
			else
				b%=a;
		}
		cout<<(a+b)<< " "<<(x*y)/(a+b)<< endl;;
	}
   return 0;
}

