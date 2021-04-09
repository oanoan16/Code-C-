#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int unit;

void printf(int a[], int b)
{
	cout << "[" << a[1];
	for (int i=2; i<=b; i++)
		cout << " " << a[i];
	cout << "]" << endl;
}

void solve()
{
	int n, a[15], i, x;
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	printf(a,n);
	x=n-1;
	while(x>0)
	{
		cout << "[" ;
		for (int i=1; i<=x; i++)
		{
			a[i]=a[i]+a[i+1];
			if (i==x)
				cout << a[i] << "]";
			else
				cout << a[i] << " ";
		}	
		cout << endl;
		x--;		
	}
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	
	return 0;
}


