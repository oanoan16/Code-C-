#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool check(string s)
{
	for (int i=0; i<s.size(); i++)
		if (s[i]>='a' && s[i] <= 'z')
			return false;
	return true;
}
int main()
{
	faster();
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	while (!ss.eof())
	{
		ss >> s;
		if (check(s))
			vs.push_back(s);
	}
	for (int i=0; i<vs.size(); i++)
		cout << vs[i] << " ";		
	return 0;
}


