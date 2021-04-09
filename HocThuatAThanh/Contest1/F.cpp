#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	for ( int i=1; i<=n; i++)
	{
		int a=2, count=0;
		cin>>x;
		cout<<"Test "<<i<<": ";
		while (x!=1)
		{
			if (x%a==0)
			{
				cout<<a<<"(";
				while (x%a==0)
				{
					x=x/a;
					count++;
				}
				cout<<count<<") ";
			}
			a++;
			count=0;
		}	
		cout<<"\n";
	}
}



