#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t;
int main()
{
	faster();
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int i=s.length()-1;
		while (s[i]=='1' && i>=0)
			i--;
		if (i<0)
			for (int j=0; j<s.length(); j++)
				s[j]='0';
		else
		{
			s[i]='1';
			if (i<s.length()-1)
				for (int j=i+1; j<s.length(); j++)
					s[j]='0';
		}
		cout << s << endl;
	}
	return 0;
}


