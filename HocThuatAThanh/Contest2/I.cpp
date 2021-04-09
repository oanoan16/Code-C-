#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef pair <int, int> pii;
int main()
{
	string s;
	vector <pii> vp;
	int index=0,c=0;;
	getline(cin, s);
	for (int i=0; i<s.length()-1; i++)
		for(int j=i+1; j<s.length(); j++)
			if (s[j]==s[i] && j!=i+1)
				vp.push_back(make_pair(i,j));
	if (vp.size()==0 || vp.size()==1)
		cout <<0<< endl;
	else 
	{
		for (int i=0; i<vp.size()-1; i++)
			for (int j=i+1; j<vp.size(); j++)
				if (vp[j].first>vp[i].first && vp[j].first<vp[i].second && vp[j].second>vp[i].second)
					c++;
	}
	cout << c << endl;
   return 0;
}

