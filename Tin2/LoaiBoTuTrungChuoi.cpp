#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	ss >> s;
	vs.push_back(s); 
	while (!ss.eof())
	{
		int c=0;
		ss >> s;
		for (int i=0; i<vs.size(); i++)
			if (vs[i].compare(s)!=0)
				c++;
		if (c==vs.size())
			vs.push_back(s);
	}
	for (int i=0; i<vs.size(); i++)
		cout << vs[i] << " ";			
	return 0;
}


