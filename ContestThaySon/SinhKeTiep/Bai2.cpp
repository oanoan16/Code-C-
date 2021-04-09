#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t, a[10000],n,k;
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i=1; i<=k; i++)
			cin >> a[i];
		int i=k;
		while (i>=1 && a[i]==n-k+i)
			i--;
		if (i<1)
		{
			for (int i=1; i<=k; i++)
				cout << i << " ";
			cout << endl;
		}
		else
		{
			a[i]+=1;
			for (int j=i+1; j<=k; j++)
				a[j]=a[j-1]+1;
			for (int j=1; j<=k; j++)
				cout << a[j] << " ";
			cout << endl;
		}			
	}
	
	return 0;
}


