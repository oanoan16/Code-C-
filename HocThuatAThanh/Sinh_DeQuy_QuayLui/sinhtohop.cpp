#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,k,a[15];

void printf()
{
	for (int i=1; i<=k; i++)
		cout << a[i] << " ";
	cout << endl;
}

void Try(int i)
{
	for (int j=a[i-1]+1; j<=n-k+i; j++)
	{
		a[i]=j;
		if (i==k)
			printf();
		else 
			Try(i+1);
	}
	
}
int main()
{
	faster();
	cin >> n >> k;
	a[0]=0;
	Try(1);
	return 0;
}

