#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string StandardName(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	*s.begin() = toupper(*s.begin());
	return s;
}

string upper(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

void Solve()
{
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	while (!ss.eof())
	{
		ss >> s;
		vs.push_back(s);
	}
	for (int i = 1; i < vs.size() ; i++)
		if (i==vs.size()-1)
			cout << StandardName(vs[i]) <<  ", ";
		else
			cout << StandardName(vs[i]) <<  " ";
	cout << upper(vs[0]);
}

int main()
{	
	Solve();
   return 0;
}

