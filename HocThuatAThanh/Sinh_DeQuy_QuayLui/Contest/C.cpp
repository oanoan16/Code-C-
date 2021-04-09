#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t;

void solve()
{
	int n,k,a[25],c=0,b[25]={0};
	cin >> n >> k;
	for (int i=1; i<=k; i++)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	int j=k;
	while (j>0 && a[j]==n-k+j)
		j--;
	if (j>0)
	{
		b[j]=b[j]+1;
		for (int i=j+1; i<=k; i++)
			b[i]=b[i-1]+1;
		c=k;
		for (int i=1; i<=k; i++)
			for (int h=1; h<=k; h++)
				if (a[h]==b[i])
					c--;
		cout << c << endl;
	}
	else 
		cout << k << endl;
}
int main()
{
	faster();
	cin >> t;
	while (t--)
		solve();	
	return 0;
}


