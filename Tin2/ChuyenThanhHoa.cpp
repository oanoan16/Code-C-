#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s;
	getline(cin,s);
	for (int i=0; i<s.length(); i++)
		if (s[i]>='a' && s[i]<='z')
			s[i]-=32;
	cout << s;
	
	return 0;
}


