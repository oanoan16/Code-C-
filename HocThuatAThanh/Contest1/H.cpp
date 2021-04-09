#include <iostream>
using namespace std;
int main()
{
	int a[10]={1,2,5,10,20,50,100,200,500,1000}, t,n,m;
	cin>>t;
	for (int i=1; i<=t; i++)
	{
		cin>>n;
		int c=0;
		for (int k=9; k>=0; k--)
		{
			if (n>=a[k])	
			{
				m=n/a[k];
				c=c+m;
				n=n-a[k]*m;
			}
		}
		cout<<c<<"\n";
	}
   return 0;
}

