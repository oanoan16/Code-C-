#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[100];
	cin>>n; 
	for ( int i=0; i<n; i++)
		cin>>a[i];
	cout<<"Buoc 0: "<<a[0]<<"\n";
	int i=1;
	while (i<n)
	{
		int k=i;
		while (k>0)
		{	
			if (a[k]<a[k-1])
				swap(a[k],a[k-1]);
			k--;
		}
		cout<<"Buoc "<<i<<": ";
		for (int j=0; j<=i; j++)
			cout<<a[j]<<" ";
		cout<<"\n";
		i++;
	}
   return 0;
}

