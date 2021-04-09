#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,c,n,h=0,a[1005];
string s;

void solve()
{
	int i=n;
	while (a[i]<=a[i-1] && i>=0)
		i--;
	if (i>0)
	{
		int j=n;
		while (a[i-1]>=a[j])
			j--;
		swap(a[i-1],a[j]);
		sort(a+i,a+n+1);
		for (int k=1; k<=n; k++)
			cout<<a[k];		
	}
	else 
		cout << "BIGGEST";
	cout << endl;
}
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		h++;
		cin >> c >> s;
		n=s.length();
		for(int i=0; i<n; i++)
			a[i+1]=s[i]-'0';
		a[0]=9;
		cout << h << " ";
		solve();
	}

	return 0;
}

