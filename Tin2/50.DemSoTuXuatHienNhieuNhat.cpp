#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string lows(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main()
{
	faster();
	int a[100000]={0};
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	ss >> s;
	vs.push_back(s); 
	a[0]++;
	while (!ss.eof())
	{
		int c=0;
		ss >> s;
		for (int i=0; i<vs.size(); i++)
		{
			if (lows(vs[i]).compare(lows(s))!=0)
				c++;
			else 
				a[i]++;
		}
		if (c==vs.size())
		{
			vs.push_back(s);
			a[vs.size()-1]++;
		}
	}
	int max=-1,key=0;
	for (int i=0; i<vs.size(); i++)
		if (a[i]> max)
		{
			max=a[i];
			key=i;
		}
	cout << vs[key] << " " << max << endl;			
	return 0;
}


