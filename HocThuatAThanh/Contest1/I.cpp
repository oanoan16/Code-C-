#include <iostream>
using namespace std;
int main()
{
	int t, a[20][20],n,k;
	cin>>t;
	for (int h=1; h<=t; h++)
	{
		cout<<"Test "<<h<<":\n";
		cin>>n;
		k=n*n+1;
		int b=0, dau=0, cuoi=n-1;
		while (dau<=cuoi)
		{
			for (int i=dau; i<=cuoi; i++)
			{
				a[dau][i]=--k;
			}
			for ( int i=dau+1 ; i<=cuoi; i++)
			{
				a[i][cuoi]=--k;
			}
			for (int i=cuoi-1; i>=dau; i--)
			{
				a[cuoi][i]=--k;
			}
			for ( int i=cuoi-1; i>=dau+1; i--)
			{
				a[i][dau]=--k;
			}
			dau++;
			cuoi--;
		}
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<n; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
   return 0;
}

