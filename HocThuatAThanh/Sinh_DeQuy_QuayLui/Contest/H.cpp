#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, k, s, c=0, sum=0, a[25];

void Try(int x)
{
	if (sum>s)
		return;
	for (int i=a[x-1]+1; i<=n; i++)
	{
		a[x]=i;
		sum+=i;
		if (x==k)
		{
			if (sum==s)
				c++;
		}
		else 
			Try(x+1);
		sum-=i;
	}
}
	
int main()
{
	faster();
	while (1)
	{
		cin >> n >> k >> s;
		if (n==0 && k==0 && s==0)
			return 0;
		else 
		{
			a[0]=0;
			sum=0;
			c=0;
			Try(1);
			cout << c << endl;
		}
	}	
	return 0;
}


