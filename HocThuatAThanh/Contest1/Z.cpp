#include <iostream>
// Adjacency List----> Adjacency Matrix
using namespace std;
int a[100][100];
int main()
{
	int n,m;
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<n; j++)
		{
			cin>>m;
			a[i][m]=1;
			a[m][i]=1;
		}		
	}
	for ( int i=1; i<=n; i++)
	{
		for ( int j=1; j<=n; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
   return 0;
}

