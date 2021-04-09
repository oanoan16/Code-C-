#include <iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	for (int h=1; h<=t; h++)
	{
		cout<<"Test "<<h<<":\n";
		cin>>n;
		long long a[20][20], c=1, b=1, dau=0, cuoi=n-1;
		a[0][0]=1;
		a[0][1]=1;
		for (int i=2; i<=cuoi; i++)
		{
				a[dau][i]=c+b;
				c=b;
				b=a[dau][i];
		}
		int k=n;
		while (dau<=cuoi)
		{
			for ( int i=dau+1 ; i<=cuoi; i++)
			{
				a[i][cuoi]=c+b;
				c=b;
				b=a[i][cuoi];
				k++;
			}
			for (int i=cuoi-1; i>=dau; i--)
			{
				a[cuoi][i]=c+b;
				c=b;
				b=a[cuoi][i];
				k++;
			}
			for ( int i=cuoi-1; i>=dau+1; i--)
			{
				a[i][dau]=c+b;
				c=b;
				b=a[i][dau];
				k++;
			}
			dau++;
			cuoi--;
			for (int i=dau; i<=cuoi; i++)
			{
				a[dau][i]=c+b;
				c=b;
				b=a[dau][i];
				k++;
			}
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

