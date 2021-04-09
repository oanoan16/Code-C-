#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;		
		string bir="0";
		bir+=s;
		string gray="";
		for (int i=0; i<s.size(); i++)
			if (s[i]==bir[i])
				gray+='0';
			else
				gray+='1';
		cout << gray << endl;
	}
	return 0;
}


