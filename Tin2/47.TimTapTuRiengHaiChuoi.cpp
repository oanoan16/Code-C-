#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
int main()
{
	faster();
	int c=0,b=0;
	string s1,s2;
	vector <string> vs1, vs2;
	stringstream ss1, ss2;
	getline(cin,s1);
	getline(cin,s2);
	// tim cac tu khac nhau string s1 push vao vs1
	ss1 << s1;
	ss1 >> s1;
	vs1.push_back(s1); 
	while (!ss1.eof())
	{
		ss1 >> s1;
		b=0;
		for (int i=0; i<vs1.size(); i++)
		{
			if (vs1[i].compare(s1)!=0)
				b++;
		}
		if (b==vs1.size())
			vs1.push_back(s1);
	}
	// tim cac tu khac nhau s2, push vao vs2
	ss2 << s2;
	ss2 >> s2;
	vs2.push_back(s2); 
	while (!ss2.eof())
	{
		ss2 >> s2;
		for (int i=0; i<vs2.size(); i++)
		{
			if (vs2[i].compare(s2)!=0)
				vs2.push_back(s2);
		}
	}
	// sap xep theo tu dien s1
	for (int i=0; i<vs1.size()-1; i++)
		for (int j=i+1; j<vs1.size(); j++)
			if (vs1[j].compare(vs1[i])<0)	
				swap(vs1[j],vs1[i]);
	// tim tu s1 trong s2, neu khong co thi in
	for (int i=0; i<vs1.size(); i++)
	{
		c=0;
		{
			for (int j=0; j<vs2.size(); j++)
				if (vs2[j].compare(vs1[i])!=0)
					c++;
		}
		if (c==vs2.size())	
			cout << vs1[i] << " ";
	}
	return 0;
}


