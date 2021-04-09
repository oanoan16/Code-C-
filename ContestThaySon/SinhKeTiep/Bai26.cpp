#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

void solve()
{
	int key,max,k,d=0,i=0;
	string s;
	cin >> k;
	cin >> s;
	while (d<k && i<s.size())
	{
		max=-1;
		for (int j=s.size()-1; j>i; j--)
		{
			if (s[j]-48>max)
			{
				max=s[j]-48;
				key=j;
			}
		}
		if (max>s[i]-48)
		{
			swap(s[i],s[key]);
			d++;
		}
		i++;
	}
	cout << s << endl;
}
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	
	return 0;
}


