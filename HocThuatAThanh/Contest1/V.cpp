#include <iostream>
// Binary Search
using namespace std;
int main()
{
	int t,n,k,a[100005];
	cin>>t;
	for ( int i=1; i<=t; i++)
	{
		cin>>n>>k;
		for (int j=1; j<=n; j++)
			cin>>a[j];
		int left=1;
		int right=n;
		int c=0;
		while (left<=right)
		{
			int mid=(left+ right)/2;
			if (a[mid]==k)
			{
				cout<<mid<<"\n";
				c=1;
				break;
			}
			else
			{
				if ( a[mid]<k)
					left= mid+1;
				else
				{
					if ( a[mid]>k)
					right=mid-1;
				}
			}
		}
		if (c==0)
			cout<<"NO\n";
	}
   return 0;
}

