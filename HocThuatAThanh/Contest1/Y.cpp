#include <iostream>
// Adjacency Matrix------> Adjacency List
using namespace std;
int main()
{
	int a[100][100], n;
	cin>>n;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n ; j++)
			cin>>a[i][j];
	for (int i=1; i<=n; i++)
	{
		for ( int j=1; j<=n; j++)
			if ( a[i][j]==1)
				cout<<j<<" ";
		cout<<"\n";
	}
   return 0;
}

