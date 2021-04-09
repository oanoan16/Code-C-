#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s,s2="";
	getline (cin,s);
	for (int i=0; i<s.length(); i++)
		if (s[i]!=32)
			s2+=s[i];
	cout << s2;
	
	return 0;
}


