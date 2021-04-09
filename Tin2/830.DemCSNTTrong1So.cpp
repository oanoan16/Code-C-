#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool prime(int x)
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
	int a[10]={0}, y, c=0, b[10]={0};
	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++)
	{
		y=s[i]-48;
		if (prime(y))
		{
			int t=0;
			for (int j=0; j<=c; j++)
			{
				if (y==a[j])
				{
					b[j]++;
					t++;
				}
			}
			if (t==0)
			{
				a[++c]=y;
				b[c]++;
			}
		}
	}
	for (int i=1; i<=c; i++)
		cout << a[i] << " " << b[i] << endl;	
	
	return 0;
}


