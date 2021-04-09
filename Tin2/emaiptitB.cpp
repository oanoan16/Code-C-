#include <bits/stdc++.h>
using namespace std;

vector <string> vs2;

string StandardName(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
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
	string s1 ="";
	for (int i = 0; i < vs.size() - 1; i++)
		s1.push_back(*vs[i].begin()) ;
	s1 += vs[vs.size() - 1];
	StandardName(s1);
		cout << s1 << "@ptit.edu.vn" << endl;
}

int main()
{	
	Solve();
   return 0;
}

