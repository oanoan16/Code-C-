#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool prime(long long x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

int main()
{
	faster();
	long long n, a[10000],b[10000]={0};
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	for (int i=0; i<n; i++)
	{
		if (prime(a[i]))
		{
			b[i]++;
			for (int j=i+1; j<n; j++)
				if (a[i]==a[j])
				{
					b[i]++;
					a[j]=0;		
				}
		}
	}
	for (int i=0; i<n; i++)
		if (b[i]>=1)
			cout << a[i] << " " << b[i] << endl;	
	return 0;
}


