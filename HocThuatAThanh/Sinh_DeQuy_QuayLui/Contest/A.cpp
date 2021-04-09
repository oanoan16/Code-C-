#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, t, k, a[20],c=0;

void printf()
{
	for (int i=1; i<=n; i++)
		cout << a[i];
	cout << endl;
}

void Try(int x)
{

	for (int i=0; i<=1; i++)
	{
 		a[x]=i;
		if (a[x]==1)
			c++;
		if (x==n)
		{
			if (c==k)
				printf();
		}
		else
            Try(x+1);
	}
	c--;
}
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
	    cin >> n >> k;
	    c=0;
        Try(1);
	}


	return 0;
}

