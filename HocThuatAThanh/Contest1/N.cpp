#include <bits/stdc++.h>
using namespace std;
string StandardName(string s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	*s.begin() = toupper(*s.begin());
	return s;
}

void Solve()
{
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	while (ss >> s)
	{
		
		vs.push_back(s);
	}
	for (int i = 0; i < vs.size(); i++)
		cout << StandardName(vs[i]) << " ";
	cout << endl;
}
int main()
{
	int t;
	cin >> t;	
	string s;
	getline(cin,s);
	while (t--)
	{
		Solve();
	}
   return 0;
}
