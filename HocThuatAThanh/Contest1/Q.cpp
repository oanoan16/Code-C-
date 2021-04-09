#include <bits/stdc++.h>
using namespace std;

string LowCase (string s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}

void Solve()
{
	stringstream ss;
	string s1,s2;
	vector <string> vs;
	getline(cin,s1);
	ss << s1;
	getline(cin,s2);
	while (!ss.eof())
	{
		ss >> s1;
		if (LowCase(s2).compare(LowCase(s1)) != 0)
			vs.push_back(s1);
	}
	for (int i = 0; i < vs.size(); i++)
		cout << vs[i] << " ";
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	string s1;
	getline(cin,s1);
	while (t--)
	{
		Solve();
	}
   return 0;
}

