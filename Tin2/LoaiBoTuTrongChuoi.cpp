#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	stringstream ss;
	vector <string> vs;
	ss << s1;
	while (!ss.eof())
	{
		ss >> s1;
		vs.push_back(s1);
	}
	for (int i=0; i<vs.size(); i++)
	{
		if (vs[i].compare(s2)!=0)
			cout << vs[i] << " ";
	}
	return 0;
}


