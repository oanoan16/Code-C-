#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, a[100000],b[100000],n;
	cin>>t;
	for ( int i=1; i<=t; i++)
	{
		cin>>n;
		for (int j=1; j<=n; j++)
			cin>>a[j]>>b[j];
		for ( int j=1; j<n; j++)
			for (int k=j+1; k<=n; k++)
			{
				if (b[j]>b[k])
				{
					swap(b[j],b[k]);
					swap(a[j],a[k]);
				}
			}
		for (int j=1; j<=n; j++)
		 cout<<a[j]<<" "<<b[j]<<"\n";
		int time=b[1];
		int c=1;
		for (int j=2; j<=n; j++)
			if (a[j]>=time)
			{
				time=b[j];
				c++;
			}
		
		cout<<c;
	}
   return 0;
}

