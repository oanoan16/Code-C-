#include <iostream>
using namespace std;
int main()
{
	int n,k,a[200][200],r, c, newr,newc;
	cin>>n;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>a[i][j];
	cin>>k;
	newr=n-1;
	newc=n-1;
	for (int i=1; i<=k; i++)
	{
		cin>> r>>c;
		for (int j=r+1; j<=newr; j++)
		{
			for (int l=0; l<=newc; l++)
				a[j-1][l]=a[j][l];
		}
		newr--;
		for (int j=c+1; j<=newc; j++)
		{
			for (int l=0; l<=newr; l++)
				a[l][j-1]=a[l][j];
		}
		newc--;
	}
	for (int i=0; i<=newr; i++)
	{
		for ( int j=0; j<=newc; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
   return 0;
}

